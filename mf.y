%start LIST
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

%%

LIST: /* */ ;

%%

FILE* openFile(int argc,char* argv[])
{
	FILE *f;
	if (argc == 1)
	{
		yyerror("Please write a file, we can't work without it.");
		return;
	}
	else if(argc == 2)
	{
		f = fopen(argv[1], "r");
		if(!f)
		{
			yyerror("Can't open your file.");
			return;
		}
		printf("File is opened");
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
