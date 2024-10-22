%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern FILE *yyout;
extern int yylex();

unsigned int line = 1;
int yyparse();
int yyerror(const char *s);
void Error(const char* err_type, int line_num);

unsigned int cond = 0;
unsigned int in_target = 0;
int error_num = 0;
%}

%union 
{
        char *str;
}


%token COMMAND SHELL EOL SPECIAL IFNEQ IFEQ ELSE IFDEF IFNDEF ENDDEF ENDIF
%token VAR_DEF TEMP T_TEMP INCL DEF EXPORT UNEXPORT ERROR ABSPATH DIR NOTDIR SUFFIX REALPATH CALL VALUE EVAL SHELL_COMMAND ADDPREFIX ADDSUFFIX
%token FLAVOUR ORIGIN AND OR WORD SORT WORDLIST FIRSTWORD PATSUBST STRIP FINDSTRING FILTER SUBST WILDCARD FOREACH BASENAME FILECOMMAND JOIN

%token <str> PATH
%token <str> STRING
%token <str> VAR
%token <str> NAME
%token <str> FILE_

%start lines

%%

lines: 
     line
      
    | lines line          
             
    ;

line: end_of_line
    
    | if_cond       
    
    | include                       
    
    | define              	
    
    | var 				{ in_target = 0;}
    
    | target				{ in_target = 1;}  
    
    | PATH '/' TEMP end_of_line		{ Error("There aren't unit from path only", line);}
    
    | var_val '/' TEMP end_of_line		{ Error("There aren't unit from path only", line);}
    
    | var_val '/' var_val end_of_line		{ Error("There aren't unit from path only", line);}
    
    | var_val end_of_line			{ Error("There aren't unit from variable value", line);}        
    
    | NAME end_of_line				{ Error("There aren't unit from text only", line);}
    
    | PATH end_of_line				{ Error("There aren't unit from path only", line);}
    
    | FILE_ end_of_line			{ Error("There aren't unit from file only", line);}
    
    | VAR end_of_line				{ Error("There aren't unit from variable autentification only", line);}
    
    | STRING end_of_line			{ Error("There aren't unit from string only", line);}
    
    | SHELL end_of_line			{ Error("There aren't unit from shell code only", line);}
    
    | SHELL_COMMAND shell_values ')' end_of_line               { Error("There aren't unit from shell code only", line);}
                                    
    | COMMAND end_of_line			{ if(in_target == 0) Error("There aren't unit from command only.", line);}
    
    | ERROR
    
    ;

target: 
      target_is prequisites end_of_line      
      
    | target_is prequisites ';' target_units end_of_line
    
    | target_is prequisites ';' end_of_line
    
    ;

target_is: 
      target_names ':'
      
    | target_names ':'':'
    
    | SPECIAL ':'
    
    | SPECIAL ':'':'
    
    ;

target_names: 

      target_names target_name
      
    | target_name
    
    ;

target_name: 

      NAME
      
    | PATH
    
    | PATH '/' TEMP
    
    | var_val '/' TEMP
    
    | var_val '/' var_val
    
    | FILE_
    
    | T_TEMP
    
    | TEMP
         
    | '('TEMP')'
    
    | var_val
    
    | VAR				{ Error("Variable autentification without certain variable", line);}
    
    | STRING				{Error("Target name can't be a string", line);}
    
    ;
    
    
target_units: 

      target_unit
      
    | target_units target_unit
    
    ;

target_unit: 
      NAME
      
    | PATH '/' TEMP 
      
    | PATH
    
    | FILE_
    
    | VAR
    
    | var_val
    
    | var_val '/' TEMP
    
    | var_val '/' var_val
    ;

var: 
      var_name VAR_DEF end_of_line
                      
    | var_name VAR_DEF var_units end_of_line
     
    | EXPORT NAME end_of_line
    
    | EXPORT var
    
    | EXPORT end_of_line
    
    | UNEXPORT var_name end_of_line
    
    | UNEXPORT end_of_line
    
    ;

var_name: 

      NAME
      
    | VAR			{Error("Variable authentication without sertain variable", line);}
    
    | PATH			{Error("Path instead of variable name", line);}
    
    | FILE_			{Error("Name of file instead of variable name", line);}
    
    | PATH '/' TEMP		{Error("Path can't be a name of variable", line);}
    
    | var_val '/' TEMP		{Error("Existing variable can't be a name of variable", line);}
    
    | var_val '/' var_val	{Error("Existing variable can't be a name of variable", line);}
    
    | var_val			{Error("Existing variable can't be a name of variable", line);}
    
    | STRING			{Error("String can't be a name of a variable", line);}
    
    ;

var_units: 

      NAME        
                                     
    | STRING
    
    | PATH
    
    | FILE_
    
    |'(' var_units ')'
    
    |'{' var_units '}' 
    
    | var_unit
    
    | var_units var_unit
    
    | var_units NAME
    
    | var_units STRING
    
    | var_units PATH
    
    | var_units FILE_
   
    | var_units '(' var_units ')'
    
    | var_units '{' var_units '}'
    
    ;

var_unit: 
    var_val
    
    | ':' | '|' | '+' | '/' | '-' | '&' | ';' | '[' | ']' | '<' | '>' | '\"' | '\'' 
      
    | funcs 
    
    | VAR_DEF
    
    | SHELL
    
    | SHELL_COMMAND shell_values ')'
    
    | TEMP
       
    | VAR					{Error("Variable authentication without certain variable", line);}
    
    ;

var_val: 

      '$' NAME
      
    | '$' '$' NAME
    
    | '$' '(' NAME  ')'   
                         
    | '$' '{' NAME  '}'  
       
    | '$' '(' var_unit ')'
    
    | '$' '{' var_unit '}'
    
    | '$' '$' '(' var_units ')'    
                                 
    | '$' '$' '{' var_units '}'
    
    | '$' '(' NAME  ':' elems VAR_DEF elems ')'
             
    | '$' '{' NAME  ':' elems VAR_DEF elems '}'  
           
    | '$' '(' var_unit  ':' elems VAR_DEF elems ')'    
     
    | '$' '{' var_unit  ':' elems VAR_DEF elems '}'
    
    | '$' STRING		{Error("You're calling for a string, not variable", line);}
    
    | '$' '(' STRING ')'	{Error("You're calling for a string, not variable", line);}
    
    | '$' '{' STRING '}'	{Error("You're calling for a string, not variable", line);}
    
    | '$' '$' STRING		{Error("You're calling for a string, not variable", line);}
    
    | '$' '(' PATH '/' TEMP ')'	{Error("You're calling for a string, not variable", line);}
    
    | '$' '{' PATH '/' TEMP '}'	{Error("You're calling for a string, not variable", line);}
    
    | '$' PATH			{Error("You're calling for a path, not variable", line);}
    
    | '$' '$' PATH		{Error("You're calling for a path, not variable", line);}
    
    | '$' '(' PATH ')'		{Error("You're calling for a path, not variable", line);}
    
    | '$' '{' PATH '}'		{Error("You're calling for a path, not variable", line);}
    
    | '$' FILE_		{Error("You're calling for a file name, not variable", line);}
    
    | '$' '$' FILE_		{Error("You're calling for a file name, not variable", line);}
                       
    | '$' '{' FILE_ '}'	{Error("You're calling for a file name, not variable", line);}
    
    | '$' '(' FILE_ ')'	{Error("You're calling for a file name, not variable", line);}
    
    | '$' '(' ')'		{Error("Empty variable calling", line);}
    ;


elems:
    TEMP

    |  NAME
      
    | FILE_
    
    | var_val '/' TEMP
    
    | var_val '/' var_val
    
    | PATH '/' TEMP
    
    | PATH '/' var_val
    
    ;

prequisites:

	| prequisite
	
	;

prequisite:

	prequisite_unit
    
    | prequisite prequisite_unit          
    
    ;

prequisite_unit: 

      NAME 
      
    | PATH
    
    | FILE_
    
    | funcs
    
    | TEMP
         
    | '('TEMP')'
    
    | var_val
    
    | VAR	{Error("There is a variable authentication without certain variable", line);}
    
    | STRING	{Error("String can't be a part of prequisite", line);}
    
    ;
    
if_cond: 

      if conds end_of_line 
    
    | ifdef ifdef_conds end_of_line
    
    | ELSE	{if(!cond) yyerror("Can't find ifeq/ifdef statement. Write it down if you want to work with else.");}
    
    | ENDIF	{if(!cond) yyerror("Can't find ifeq/ifdef statement. Write it down if you want to work with else."); else --cond;}
    
    ;

if:
      IFEQ	{++cond;}
      
    | IFNEQ	{++cond;}
    
    ;

ifdef: 
      IFDEF	{++cond; } 
      
    | IFNDEF	{++cond; }
    
    ;
    
ifdef_conds:
	NAME
	
	| PATH
	
	| FILE_
	
	| VAR
	
	| var_val
	
	;

conds:

	'(' cond ',' cond ')'
	
	| '(' conds ',' cond ')'
	
	| '(' ',' cond ')'
	
	| '(' cond ',' ')'
	
	| '(' ',' ')'
	
	| STRING STRING
	
	;

cond: 

	VAR

    | NAME
     
    | PATH
    
    | FILE_
    
    | var_val
    
    | STRING
    
    | funcs
    
    ;

define:	DEF NAME end_of_line def_commands ENDDEF end_of_line

	;

def_commands: 

      def_command
      
    | def_commands def_command
    
    ;

def_command: 
     
     ':' | '|' | '+' | '/' | '-' | '&' | ';' | '[' | ']' | '<' | '>' | '!'
    
    | VAR_DEF
    
    | SHELL
    
    | SHELL_COMMAND shell_values ')'
    
    | FILE_
    
    | var_val
    
    | NAME
    
    | funcs
    
    | VAR
    
    | PATH
    
    | STRING
    
    | COMMAND
    
    | end_of_line
    
    ;

include: 
	INCL include_units
	
	;

include_units:
	
	NAME
	
	| PATH '/' TEMP
	
	| var_val '/' TEMP
	
	| var_val '/' var_val
	
	| PATH
	
	| FILE_
	
	| var_val
	
	;
	
end_of_line:	EOL {line++;} ;

funcs:

	funcs_not_eval
	
	| EVAL funcs_not_eval ')'
	
	;

funcs_not_eval:

	ABSPATH names ')'
	
	| DIR names ')'
	
	| NOTDIR names ')'
	
	| SUFFIX names ')'
	
	| REALPATH names ')'
	
	| CALL NAME ',' var_values ')'
	
	| VALUE NAME ')'
	
	| FLAVOUR NAME ')'
	
	| ORIGIN NAME ')'
	
	| AND add_conds ')'
	
	| OR add_conds ')'
	
	| WORD NAME ',' names ')'
	
	| SORT names ')'
	
	| WORDLIST NAME ',' NAME ',' names ')'
	
	| FIRSTWORD names ')'
	
	| PATSUBST names',' names ',' names ')'
	
	| STRIP names ')'
	
	| FINDSTRING names ',' names ')'
	
	| FILTER names ',' names ')'
	
	| SUBST names ',' names ',' names ')'
	
	| WILDCARD names ')'
	
	| FOREACH NAME ',' var_val ',' names ')'
	
	| BASENAME names ')'
	
	| FILECOMMAND op file_name ')'
	
	| FILECOMMAND op file_name ',' names ')'
	
	| JOIN names ',' names ')'
	
	| ERROR names ')'
	
	| ADDPREFIX names ',' names ')'
	
	| ADDSUFFIX names ',' names ')'
	
	| ABSPATH ')' {Error("No args in abspath func", line);}
	
	| JOIN ')' {Error("No args in join func", line);}
	
	| FILECOMMAND ')' {Error("No args in file func", line);}
	
	| BASENAME ')' {Error("No args in basename func", line);}
	
	| FOREACH ')' {Error("No args in foreach func", line);}
	
	| WILDCARD ')' {Error("No args in wildcard func", line);}
	
	| SUBST ')' {Error("No args in subst func", line);}
	
	| FILTER ')' {Error("No args in filter func", line);}
	
	| FINDSTRING ')' {Error("No args in findstring func", line);}
	
	| STRIP ')' {Error("No args in strip func", line);}
	
	| DIR ')' {Error("No args in dir func", line);}
	
	| NOTDIR ')' {Error("No args in notdir func", line);}
	
	| SUFFIX ')' {Error("No args in suffix func", line);} 
	
	| REALPATH ')' {Error("No args in realpath func", line);}
	
	| CALL ')' {Error("No args in call func", line);}
	
	| VALUE ')' {Error("No args in value func", line);}
	
	| FLAVOUR ')' {Error("No args in flavour func", line);}
	
	| ORIGIN ')' {Error("No args in origin func", line);}
	
	| AND ')' {Error("No args in and func", line);}
	
	| OR ')' {Error("No args in or func", line);}
	
	| WORD ')' {Error("No args in word func", line);}
	
	| SORT ')' {Error("No args in sort func", line);}
	
	| WORDLIST ')' {Error("No args in wordlist func", line);}
	
	| FIRSTWORD ')' {Error("No args in firstword func", line);}
	
	| PATSUBST ')' {Error("No args in patsubst func", line);}
	
	;

file_name:

	FILE_
	
	| TEMP
	
	| T_TEMP
	;
	
op:

	'>'
	
	| '>' '>'
	
	| '<'
	
	;

names:
	
	name
	
	| names name ;
	
name:

	FILE_
	
	| PATH
	
	| var_val 
	
	| TEMP
	
	| NAME
	;
	
var_values:

	var_val
	
	| var_names
	
	| var_values ',' var_val 
	
	| var_values ',' var_names
	;
	
var_names:

	NAME ;
	
add_conds:

	cond
	
	| add_conds ',' cond ;

shell_values:

	shell_value
	
	| shell_values shell_value;
	
shell_value:

	STRING
	
	| NAME
	
	| FILE_
	
	| PATH
	
	| TEMP
	
	| T_TEMP
	
	| var_val
	
	;


%%

void Error(const char* err_type, int line_num) {
    printf("WARNING in line %u: %s \n", line_num - 1, err_type);
    error_num++;
}

int yyerror(const char *str) {
printf("ERROR Line %u: %s\n", line, str);
printf("NOT SUCCESSFUL\n");
exit(0);};

int main(int argc, char **argv)
{
  if (argc == 2) {
    yyin = fopen(argv[1], "r");
    if(!yyin)
    {
      printf("ERROR Can't open source code.\n");
      return 1;
    }
  }
  else {
    printf("ERROR Either no compiler or no source code in cmd\n");
    return 1;
  }
  yyparse();
  if (error_num == 0) printf("SUCCESS\n");
  else printf("NOT SUCCESSFUL\n");
  return 0;
}
