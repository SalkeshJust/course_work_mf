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

%token EOL ERROR
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

line:	EOL {cur_line++;}

	| target

	| var

	| cmd

	| cond

	| include

	| define

	| ERROR	

	;

target:	target_is prequisites EOL {cur_line++;} 

	| target_is prequisites ';' EOL {cur_line++;}
	
	;

target_is:

	template

	| target_names ':' 

	| target_names ':' ':' 

	| SPECIAL ':' {printf("special");}

	| SPECIAL ':' ':' {printf("special");}

	;

target_names:

	target_name

	| target_names target_name

	;

target_name:

	NAME {printf("target_name");}

	| PATH {printf("target_path");}

	| FILE_NAME {printf("target_file");}

	| var_val

	| template

	;

template:

	TEMPLATE {printf("template");}

	| '(' TEMPLATE ')' {printf("template");}

	;

prequisites:

	/* */

	| prequisite

	| prequisites prequisite

	;

prequisite:

	NAME {printf("prequisite_name");}

	| PATH {printf("prequisite_path");}

	| FILE_NAME {printf("prequisite_file");}

	| var_val {printf("prequisite_var_val");}

	;

var:	var_name VAR_DEF EOL

	| var_name VAR_DEF var_units EOL
	
	| EXPORT NAME EOL

	| EXPORT var EOL

	;

var_name:

	NAME {printf("name");}
	
	;

var_units:

	 var_unit

	| var_units var_unit

	| var_units var_oper var_unit

	| var_units ')'

	| var_units VAR_DEF var_unit

	| var_units '(' var_units ')'

	| var_units '{' var_units '}'

	| var_val

	;

var_unit:
	
	NAME

	| '\'' NAME '\''

	| '\"' NAME '\"'

	| FILE_NAME

	| PATH

	| SHELL_COMMAND

	| FUNCTION {printf("function\n");}

	;

var_oper: ':' | '|' | '+' | '/' | '-' | '&' | ';' | '[' | ']' | '<' | '>' | '\"' | '\'' ;

var_val:

	'$' NAME

	| '$' '$' NAME

	| '$' '(' NAME ')'

	| '$' '{' NAME '}' 

	| '$' '(' var_unit ')'

	| '$' '{' var_unit '}'

	| '$' '$' '(' var_units ')'
	
	| '$' '$' '{' var_units '}'

	| '$' '(' var_unit ':' elem VAR_DEF elem ')'

	| '$' '{' var_unit ':' elem VAR_DEF elem '}'

	;

elem:
	NAME

	| FILE_NAME

	;

cmd:	COMMAND EOL {printf("command");};

cond:	if conds EOL
	
	| if '(' conds ')' EOL

	| ifdef unit EOL

	| ELSE

	| ENDIF

	;

if:	IFEQ

	| IFNEQ

	;

ifdef:	IFDEF

	|IFNDEF

	;
conds: string_conds | var_conds ;

var_conds:	var_cond

		| var_conds ',' var_cond

		;

var_cond:	unit

		| VAR_AUT

		| string_const

		| FUNCTION

		;

include:	INCLUDE units EOL;

define:	DEFINE NAME EOL def_commands ENDEF EOL
	| DEFINELINE NAME def_command EOL
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
	
	| EOL

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

