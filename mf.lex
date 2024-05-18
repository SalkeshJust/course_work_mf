%{
#include "mf.tab.h"
%}

DIGIT [0-9]
TEXT [_a-zA-Z\*\-\+\@\\]

%%

^"include"  {return INCLUDE;}
^"export" {return EXPORT;}

^"define"   {return DEFINE;}
^"endef"    {return ENDEF;}

^"#define"   {return DEFINELINE;}

"ifdef"     {return IFDEF;}
"ifndef"    {return IFNDEF;}
"ifeq"      {return IFEQ;}
"ifneq"     {return IFNEQ;}
"else"      {return ELSE;}
"endif"     {return ENDIF;}


^\t.*	{return COMMAND;}
^\t.*(\\\n[ \t]*.*)* {return COMMAND;}

\`[^\`]*\` {return SHELL_COMMAND;}
$\(shell[^\)]*\) {return SHELL_COMMAND;}

$\(abspath	{return FUNCTION;}
$\(addsuffix	{return FUNCTION;}
$\(addprefix	{return FUNCTION;}
$\(and		{return FUNCTION;}
$\(basename	{return FUNCTION;}
$\(call		{return FUNCTION;}
$\(dir		{return FUNCTION;}
$\(eval		{return FUNCTION;}
$\(error	{return FUNCTION;}
$\(file		{return FUNCTION;}
$\(firstword	{return FUNCTION;}
$\(findstring	{return FUNCTION;}
$\(filter-out	{return FUNCTION;}
$\(foreach	{return FUNCTION;}
$\(flavour	{return FUNCTION;}
$\(if		{return FUNCTION;}
$\(join		{return FUNCTION;}
$\(notdir	{return FUNCTION;}
$\(or		{return FUNCTION;}
$\(origin	{return FUNCTION;}
$\(patsubst	{return FUNCTION;}
$\(realpath	{return FUNCTION;}
$\(sort		{return FUNCTION;}
$\(strip	{return FUNCTION;}
$\(suffix	{return FUNCTION;}
$\(subst	{return FUNCTION;}
$\(value	{return FUNCTION;}
$\(wordlist	{return FUNCTION;}
$\(wildcard	{return FUNCTION;}
$\(word		{return FUNCTION;}

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

"%"([\.]({TEXT})+)+ {return TEMPLATE;}
	
({TEXT}|{DIGIT})+ {yylval.str = strdup(yytext); return NAME;}
(({TEXT}|{DIGIT})+)?([\.]({TEXT})+)+ {yylval.str = strdup(yytext); return FILE_NAME;}  
(\/|[\.\.]|[\.])?(({TEXT}|{DIGIT}|[\.]|[\.\.])+[\/]?)+([\/]|[\/\*])? {yylval.str = strdup(yytext); return PATH;}
%%


int yywrap()
{
	return 1;
}
