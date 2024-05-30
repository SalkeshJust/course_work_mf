
%start lines
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

extern FILE *yyin;
extern FILE *yyout;
extern int yylex();

int yyparse();
int cur_line = 0;
int errors = 0;
int cond = 0;
int yyerror(char *s)
{
	fprintf(stderr, "Line %d error is: %s\n", cur_line, s);
	errors++;
	return 0;
}

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

	| ERROR	{yyerror("Unknown syntax");}

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

	| ERROR {yyerror("Wrong target name");}

	;

template:

	TEMPLATE 

	| '(' TEMPLATE ')' 

	;

prequisites:

	prequisite

	| '(' prequisite ')'

	| prequisites prequisite

	| prequisites '(' prequisite ')'

	;

prequisite: /* */
	
	| unit
	
	| template

	| ERROR {yyerror("It can't be prequisite");}

	;

var:	var_name VAR_DEF end_of_line

	| var_name VAR_DEF var_units end_of_line
	
	| EXPORT NAME EOL end_of_line

	| EXPORT var EOL end_of_line

	| ERROR {yyerror("Wrong definition of variable");}

	;

var_name:

	NAME 

	| PATH {yyerror("Path can't be a name of variable");}

	| FILE_NAME {yyerror("File can't be a name of variable");}

	| '(' NAME ')' {yyerror("Name can't be written in brackets");}
	
	;

var_units:

	 var_unit
	
	| '(' var_units ')'

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

	| SHELL_COMMAND {yyerror("Error reading shell command");}

	;

var_oper: ':' | '|' | '+' | '/' | '-' | '&' | ';' | '[' | ']' | '<' | '>' | '\"' | '\'' | ',';

var_val:

	'$' NAME

	| '$' '$' NAME 

	'$' PATH {yyerror("Path can't be a name of variable");}

        | '$' '$' PATH {yyerror("Path can't be a name of variable");}

	| '$' '(' var_unit ')'

	| '$' '{' var_unit '}'

	| '$' '$' '(' var_units ')'
	
	| '$' '$' '{' var_units '}'

	| '$' '(' var_unit ':' elems VAR_DEF elems ')'

	| '$' '{' var_unit ':' elems VAR_DEF elems '}'

	| ERROR {yyerror("Error reading variable value.");}

	;

elems: elem

	| elem '/' elem

	;

elem: NAME | FILE_NAME | var_val | template;

cmd:	COMMAND end_of_line ;

cond:	if conds end_of_line {cond++;}
	
	| if '(' conds ')' end_of_line {cond++;}

	| ifdef unit end_of_line {cond++;}

	| ELSE end_of_line {if(cond == 0) yyerror("Write if before writing else"); else cond--;}

	| ENDIF end_of_line {if(cond == 0) yyerror("Write if before writing else"); else cond--;}

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

	| ERROR {yyerror("Define is written wrong");}

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

	| ERROR {yyerror("Wrong def commands");}

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

	| '\'' NAME '\"' {yyerror("Wrong quotes");}

	| '\"' NAME '\'' {yyerror("Wrong quotes");}

	| ERROR {yyerror("Trouble with string");}

	;

end_of_line: EOL {cur_line++;} | COMMENT EOL {cur_line++;};
	
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
	if (cond > 0) errors++;
	if (errors == 0) printf("\nEverything is OK");
	else printf("Found %d errors", errors);
	fclose(yyin);
	return 0;
}

