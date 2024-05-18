%{
#include "mf.tab.h"
%}

DIGIT [0-9]
TEXT [_a-zA-Z\*\-\+\@\\]

%%

^"export" {return EXPORT;}

"("         { return '('; }
")"         { return ')'; }
"{"         { return '{'; }
"$"         { return '$'; }
"]"         { return ']'; }
"["         { return '['; }
"-"         { return '-'; }
"+"         { return '+'; }
"\""        { return '"'; }
"|"         { return '|'; }
";"         { return ';'; }
"/"         { return '/'; }
"&"         { return '&'; }
"<"         { return '<'; }
"}"         { return '}'; }
","         { return ','; }           
"?"         { return '?'; }
"!"         { return '!'; }
":"         { return ':'; }
">"         { return '>'; }
"`"         { return '`'; }
\'          { return '\''; }

\n	    { return EOL;}


"::="|"="|[":"|"!"|"?"|"+"]"=" {return VAR_DEF;}
$("@"|"%"|"<"|"?"|"^"|"+"|"*") {return VAR_AUT;}

".PHONY"|".SUFFIXES"|".DEFAULT"|".PRECIOUS"|".INTERMEDIATE"|".SECONDARY"|".DELETE_ON_ERROR"|".IGNORE"|".SILENT"|".EXPORT_ALL_VARIABLES"|".NOTPARALLEL"    { return SPECIAL; }
	
({TEXT}|{DIGIT})+ {yylval.str = strdup(yytext); return NAME;}
({TEXT}|{DIGIT}|[/.])+ {yylval.str = strdup(yytext); return FILE_NAME;}  
%%


int yywrap()
{
	return 1;
}
