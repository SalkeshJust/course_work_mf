%{
#include "y.tab.c"
extern unsigned int line;

extern int yyerror(const char *);
%}

%%

"#".*	{}

"+"	{return '+';}
"-"	{return '-';}
"/"	{return '/';}
"("	{return '(';}
")"	{return ')';}
"["	{return '[';}
"]"	{return ']';}
"{"	{return '{';}
"}"	{return '}';}
"&"	{return '&';}
"|"	{return '|';}
"<"	{return '<';}
">"	{return '>';}
"\""	{return '"';}
"\'"	{return '\'';}
"`"	{return '`';}
";"	{return ';';}
","	{return ',';}
"?"	{return '?';}
"!"	{return '!';}
":"	{return ':';}
"$"	{return '$';}
"@"	{}

"::="	{return VAR_DEF;}
"="	{return VAR_DEF;}
":="	{return VAR_DEF;}
"!="	{return VAR_DEF;}
"?="	{return VAR_DEF;}
"+="	{return VAR_DEF;}

^"define"   {return DEF;}
^"endef"    {return ENDDEF;}
^"include"  {return INCL;}
^"-include"  {return INCL;}
^"export"   {return EXPORT;}
^"unexport" {return UNEXPORT;}
"ifdef"     {return IFDEF;}
"ifndef"    {return IFNDEF;}
"ifeq"      {return IFEQ;}
"ifneq"     {return IFNEQ;}
"else"      {return ELSE;}
"endif"     {return ENDIF;}

\n 		{return EOL;}
\\\n[ \t]*	{}
[ \t]*\n	{return EOL;}

^\t.*			{return COMMAND;}
^\t.*(\\\n[ \t]*.*)*	{return COMMAND;}

\$\("error "      {return ERROR;}
\$\("abspath "    {return ABSPATH;}
\$\("addprefix "  {return ADDPREFIX;}
\$\("addsuffix "  {return ADDSUFFIX;}
\$\("and "        {return AND;}
\$\("basename "   {return BASENAME;}
\$\("call "       {return CALL;}
\$\("dir "        {return DIR;}
\$\("eval "       {return EVAL;}
\$\("file "       {return FILECOMMAND;}
\$\("firstword "  {return FIRSTWORD;}
\$\("findstring " {return FINDSTRING;}
\$\("foreach "    {return FOREACH;}
\$\("filter-out " {return FILTER;}
\$\("filter "     {return FILTER;}
\$\("flavour "    {return FLAVOUR;}
\$\("join "       {return JOIN;}
\$\("notdir "     {return NOTDIR;}
\$\("or "         {return OR;}
\$\("origin "     {return ORIGIN;}
\$\("patsubst "   {return PATSUBST;}
\$\("realpath "   {return REALPATH;}
\$\("sort "       {return SORT;}
\$\("strip "      {return STRIP;}
\$\("suffix "     {return SUFFIX;}
\$\("subst "      {return SUBST;}
\$\("value "      {return VALUE;}
\$\("wordlist "   {return WORDLIST;}
\$\("wildcard "   {return WILDCARD;}
\$\("word "       {return WORD;}

".DEFAULT"          		{return SPECIAL;}
".DELETE_ON_ERROR"  		{return SPECIAL;}
".EXPORT_ALL_VARIABLES" 	{return SPECIAL;}
".IGNORE"           		{return SPECIAL;}
".INTERMEDIATE"     		{return SPECIAL;}
".NOTPARALLEL"      		{return SPECIAL;}
".PHONY"            		{return SPECIAL;}
".PRECIOUS"         		{return SPECIAL;}
".SECONDARY"        		{return SPECIAL;}
".SILENT"           		{return SPECIAL;}
".SUFFIXES"         		{return SPECIAL;}

\`[^\`]*\`    		{return SHELL;}
$\("shell "	{return SHELL_COMMAND;}

$"@"	{yylval.str = strdup(yytext);return VAR;}
$"%"	{yylval.str = strdup(yytext);return VAR;}
$"<"	{yylval.str = strdup(yytext);return VAR;}
$"?"	{yylval.str = strdup(yytext);return VAR;}
$"^"	{yylval.str = strdup(yytext);return VAR;}
$"+"	{yylval.str = strdup(yytext);return VAR;}
$"*"	{yylval.str = strdup(yytext);return VAR;}

\'[^\'\n]*\'              {yylval.str = strdup(yytext); return STRING;}
\"[^\"\n]*\"              {yylval.str = strdup(yytext); return STRING;}

^"%"([_\*\-\+\@\\A-Za-z0-9]|[\.])*                     {return T_TEMP;}
"%"([_\*\-\+\@\\A-Za-z0-9]|[\.])*                      {return TEMP;}

([_\*\-\+\@\\A-Za-z0-9])+         						{yylval.str = strdup(yytext);return NAME;}
([_\*\-\+\@\\A-Za-z0-9\]|[\.])+    						{yylval.str = strdup(yytext);return FILE_;}
(\/|[\.\.]|[\.])?(([_\*\-\+\@\\A-Za-z0-9]|[\.]|[\.\.])+[\/]?)+([\/]|[\/\*])? {yylval.str = strdup(yytext);return PATH; }

[ \f\t\r\v]
.            				{ printf("Unknowm symbol %c\n",yytext[0]);yyerror("lex error"); exit(0); }

%%

int yywrap()
{
    return 1;
}
