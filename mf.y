%start lines
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

extern FILE *yyin;
extern FILE *yyout;
extern int yylex();

int yyparse();
int yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
	return 0;
}

int cur_line = 0;
FILE* openFile();
%}

%union
{
	char *str;
}

%token EOL ERROR COMMENT COMMAND_FOR_SHELL
%token DEFINE DEFINELINE ENDEF INCLUDE EXPORT IFDEF IFNDEF IFEQ IFNEQ ELSE ENDIF
%token <str> TEMPLATE
%token <str> VAR_DEF
%token <str> PATH
%token <str> FUNCTION
%token <str> VAR_AUT
%token <str> NAME
%token <str> FILE_NAME
%token <str> SPECIAL COMMAND SHELL_COMMAND

%%

lines:  /* */

	| line

	| lines line

	;

line:	

	end_of_line

	| target

	| var

	| cmd

	| cond

	| include

	| define

	| ERROR	

	;

target:	target_is prequisites end_of_line

	| target_is prequisites ';' end_of_line

	;

target_is:

	template

	| target_names ':' 

	| target_names ':' ':' 

	| SPECIAL ':' 

	| SPECIAL ':' ':' 

	;

target_names:

	target_name

	| target_names target_name

	| target_names '/' target_name

	;

target_name:

	unit	

	| template

	;

template:

	TEMPLATE 

	| '(' TEMPLATE ')' 

	;

prequisites:

	prequisite

	| prequisites prequisite

	;

prequisite: /* */
	
	| unit
	
	| template

	;

var:	var_name VAR_DEF end_of_line

	| var_name VAR_DEF var_units end_of_line
	
	| EXPORT NAME EOL end_of_line

	| EXPORT var EOL end_of_line

	;

var_name:

	NAME 
	
	;

var_units:

	 var_unit

	| var_units var_unit

	| var_units var_oper var_unit

	| var_units FUNCTION var_units ')' 

	| var_units VAR_DEF var_unit

	| var_units '(' var_units ')'

	| var_units '{' var_units '}'

	;

var_unit:

	/* */
	
	| unit

	| string_const

	| var_val

	;

var_oper: ':' | '|' | '+' | '/' | '-' | '&' | ';' | '[' | ']' | '<' | '>' | '\"' | '\'' | ',';

var_val:

	'$' NAME

	| '$' '$' NAME 

	| '$' '(' var_unit ')'

	| '$' '{' var_unit '}'

	| '$' '$' '(' var_units ')'
	
	| '$' '$' '{' var_units '}'

	| '$' '(' var_unit ':' elems VAR_DEF elems ')'

	| '$' '{' var_unit ':' elems VAR_DEF elems '}'

	;
elems: elem

	| elem '/' elem

	;

elem: NAME | FILE_NAME | var_val | template;

cmd:	COMMAND end_of_line ;

cond:	if conds end_of_line
	
	| if '(' conds ')' end_of_line

	| ifdef unit end_of_line

	| ELSE end_of_line

	| ENDIF end_of_line


	;

if:	IFEQ | IFNEQ ;

ifdef:	IFDEF | IFNDEF ;

conds: string_conds | var_conds ;

var_conds:	var_cond

		| var_conds ',' var_cond

		;

var_cond:	unit

		| VAR_AUT

		| string_const

		| FUNCTION

		;

include:	INCLUDE units end_of_line;

define:	DEFINE NAME end_of_line def_commands ENDEF end_of_line

	| DEFINELINE NAME def_command end_of_line

	;

def_commands:

	def_command

	| def_commands def_command

	;
	
def_command:

	VAR_DEF

	| SHELL_COMMAND

	| FILE_NAME

	| PATH

	| var_val

	| FUNCTION

	| VAR_AUT

	| string_const

	| COMMAND
	
	| end_of_line

	| ':' | '|' | '+' | '/' | '-' | '&' | ';' | '[' | ']' | '<' | '>' | '!'

	;

units:	unit

	| units unit

	;

unit:	NAME

	| PATH

	| FILE_NAME

	| var_val

	;	

string_conds:	string_const
	
		| string_conds string_const

		;
 
string_const:

	'\'' NAME '\''

	| '\"' NAME '\"'

	;

end_of_line: EOL | COMMENT EOL ;
	
%%

FILE* openFile(int argc,char* argv[])
{
	FILE *f;
	if (argc == 1)
	{
		yyerror("Please write a file, we can't work without it.\n");
		return;
	}
	else if(argc == 2)
	{
		f = fopen(argv[1], "r");
		if(!f)
		{
			yyerror("Can't open your file.\n");
			return;
		}
		printf("File %s is opened\n", argv[1]);
		return f;
	}
}

int main(int argc, char* argv[])
{
	yyin = openFile(argc, argv);
	yyparse();
	fclose(yyin);
	return 0;
}

