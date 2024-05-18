%start lines
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

extern FILE *yyin;
extern FILE *yyout;
extern int yylex();

void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
}

FILE* openFile();
%}

%union
{
	char *str;
}

%token VAR_DEF

%token EOL
%token EXPORT
%token <str> PATH
%token <str> VAR_AUT
%token <str> CHARS
%token <str> NAME
%token <str> FILE_NAME
%token <str> SPECIAL

%%

lines:

	line

	| lines line

	;

line:	EOL

	| target

	;

target:	target_is ':' prequisite EOL 

	| target_is ':' prequisites ';' EOL
	
	;

target_is: 

	target_names
	
	| SPECIAL {printf("special");}

	;

target_names:

	target_name

	| target_names target_name

	;

target_name:

	NAME {printf("target_name");}

	| PATH {printf("target_path");}

	| FILE_NAME {printf("target_file");}

	;

prequisites:

	prequisite

	| prequisites prequisite

	;

prequisite:

	NAME {printf("prequisite_name");}

	| PATH {printf("prequisite_path");}

	| FILE_NAME {printf("prequisite_file");}

	;
/*
VAR:	VAR_NAME VAR_DEF EOL

	| VAR_NAME VAR_DEF VAR_UNITS EOL
	
	| EXPORT TEXT EOL

	| EXPORT VAR

	;

VAR_NAME:

	TEXT
	
	;

VAR_UNITS:
	
	TEXT

	| CHARS

	| PATH

	| FILE_NAME	

	VAR_UNIT

	| VAR_UNITS VAR_UNIT

	| VAR_UNITS TEXT
	
	| VAR_UNITS CHARS

	| VAR_UNITS PATH

	| VAR_UNITS FILE_NAME

	| VAR_UNITS '(' VAR_UNITS ')'

	| VAR_UNITS '{' VAR_UNITS '}'

	;

VAR_UNIT:
	VAR_DEF

	| VAR_UNIT_SPEC

	| VAR_VAL

	| VAR_AUT

	;

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

