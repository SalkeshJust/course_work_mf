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

%token VAR_DEF

%token EOL ERROR
%token EXPORT
%token <str> TEMPLATE
%token <str> VAR_DEF
%token <str> PATH
%token <str> VAR_AUT
%token <str> NAME
%token <str> FILE_NAME
%token <str> SPECIAL

%%

lines:  /* */

	| line

	| lines line

	;

line:	EOL {cur_line++;}

	| target

	| var

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

	| template

	;

template:

	TEMPLATE {printf("template");}

	| '(' TEMPLATE ')' {printf("template");}

	;

prequisites:

	prequisite

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

	| var_units VAR_DEF var_unit

	| var_units '(' var_units ')'

	| var_units '{' var_units '}'

	| var_val

	;

var_unit:
	
	NAME

	| FILE_NAME

	| PATH

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

	;
/*

VAR_UNIT_SPEC: ':' | '|' | '+' | '/' | '-' | '&' | ';' | '[' | ']' | '<' | '>';

VAR_VAL:
	'$' TEXT
	| '$' '$' TEXT
	| '$' '(' TEXT ')'
	| '$' '{' TEXT ')'
	| '$' '(' VAR_UNIT ')'
	| '$' '{' VAR_UNIT ')'
	| '$' '$' '(' VAR_UNIT ')'
	| '$' '$' '{' VAR_UNIT '}'
	| '$' '(' TEXT ':' SUB VAR_DEF SUB ')'
	| '$' '{' TEXT ':' SUB VAR_DEF SUB '}'
	| '$' '(' VAR_UNIT ':' SUB VAR_DEF SUB ')'
	| '$' '{' VAR_UNIT ':' SUB VAR_DEF SUB '}'

SUB:
	TEXT
	| FILE_NAME
	;

*/
%%

FILE* openFile(int argc,char* argv[])
{
	FILE *f;
	if (argc == 1)
	{
		//yyerror("Please write a file, we can't work without it.");
		return;
	}
	else if(argc == 2)
	{
		f = fopen(argv[1], "r");
		if(!f)
		{
		//	yyerror("Can't open your file.");
			return;
		}
		//printf("File is opened");
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

