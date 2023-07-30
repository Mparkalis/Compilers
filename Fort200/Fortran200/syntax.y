%{
  #include "extra/hashtbl.h"
  #include <stdio.h>
  #include <stdlib.h>

  extern FILE  *yyin;
  extern int yylex();
  extern void yyerror(const char* err);
  
  HASHTBL *hashtbl;
  
  int scope = 0;

     // int error_counter = 0;

%}

%define parse.error verbose


%union{
  int iconst;
  double rconst;
  char* lconst;
  char* cconst;
  char* strings;
  char* id;
}

%token T_EOF                          0
%token T_FUNCTION                     "FUNCTION"
%token T_SUBROUTINE                   "SUBROUTINE"
%token T_END                          "END"
%token T_INTEGER                      "INTEGER"
%token T_REAL                         "REAL"
%token T_LOGICAL                      "LOGICAL"   
%token T_CHARACTER                    "CHARACTER"
%token T_COMPLEX                      "COMPLEX"       
%token T_RECORD                       "RECORD"
%token T_ENDREC                       "ENDREC"
%token T_LIST                         "LIST"
%token T_DATA                         "DATA"      
%token T_CONTINUE                     "CONTINUE"      
%token T_GOTO                         "GOTO"
%token T_CALL                         "CALL"
%token T_READ                         "READ"
%token T_WRITE                        "WRITE"
%token T_NEW                          "NEW"
%token T_LENGTH                       "LENGTH"
%token T_IF                           "IF"
%token T_THEN                         "THEN"  
%token T_ELSE                         "ELSE"  
%token T_ENDIF                        "ENDIF"
%token T_DO                           "DO"
%token T_ENDDO                        "ENDDO"
%token T_STOP                         "STOP"
%token T_RETURN                       "RETURN"

//id
%token <id>       T_ID                "ID"

//aples statheres
%token <iconst>   T_ICONST            "ICONST"
%token <rconst>   T_RCONST            "RCONST"  
%token <lconst>   T_LCONST            "LCONST"
%token <cconst>   T_CCONST            "CCONST"

//telestes
%token T_OROP                         ".OR."
%token T_ANDOP                        ".AND."
%token T_NOTOP                        ".NOT."
%token T_RELOP                        ".(GT or GE or LT or LE or EQ or NE)."
%token T_ADDOP                        "+ or -"
%token T_MULOP                        "*"
%token T_DIVOP                        "/"
%token T_POWEROP                      "**"

//functions
%token T_LISTFUNC                     "LISTFUNC"
%token T_STRING                       "STRING"

%token T_LPAREN                       "("
%token T_RPAREN                       ")"
%token T_COMMA                        ","
%token T_ASSIGN                       "="
%token T_DOT                          "."
%token T_COLON                        ":"
%token T_LBRACK                       "["
%token T_RBRACK                       "]"


 
/* %type <strings> program body declarations type vars undef_variable dims dim fields field vals value_list values value sign constant simple_constant complex_constant statements 
labeled_statement label statement simple_statement assignment variable expressions expression
listexpression goto_statement labels if_statement subroutine_call io_statement read_list read_item iter_space step write_list write_item compound_statement branch_statement
tail loop_statement subprograms subprogram header formal_parameters
*/

/*																 ;
https://sceweb.sce.uhcl.edu/helm/WEBPAGE-Fortran/myfiles/fortran-operators.html*/
/*																 ;
https://www.tutorialspoint.com/fortran/fortran_operators_precedence.htm*/

%right T_ASSIGN

%left  T_OROP
%left  T_ANDOP
%left  T_RELOP
%left  T_ADDOP
%left  T_MULOP
%left  T_DIVOP
%left  T_POWEROP
%left  T_NOTOP
%left T_RPAREN


%start program


%%

program:                          body T_END{scope--;} subprograms

																 ;
body:                             declarations statements

																 ;
declarations:                     declarations type vars
                                | declarations T_RECORD fields T_ENDREC vars
                                | declarations T_DATA vals
                                | %empty

																 ;
type:                             T_INTEGER | T_REAL | T_LOGICAL | T_CHARACTER | T_COMPLEX

																 ;
vars:                             vars T_COMMA undef_variable
                                | undef_variable

																 ;
undef_variable:                   T_LIST undef_variable
                                | T_ID T_LPAREN dims T_RPAREN       {hashtbl_insert(hashtbl,$1,NULL,scope);}
                                | T_ID                              {hashtbl_insert(hashtbl,$1,NULL,scope);}

																 ;
dims:                             dims T_COMMA dim
                                | dim

																 ;
dim:                              T_ICONST 
                                | T_ID                              {hashtbl_insert(hashtbl,$1,NULL,scope);}

																 ;
fields:                          fields field
                               | field

																 ;
field:                           type vars
                               | T_RECORD fields T_ENDREC vars

																 ;
vals:                            vals T_COMMA T_ID value_list       {hashtbl_insert(hashtbl,$3,NULL,scope);}
                               | T_ID value_list                    {hashtbl_insert(hashtbl,$1,NULL,scope);}

																 ;
value_list:                      T_DIVOP values T_DIVOP
                               | error values T_DIVOP     { yyerror("Error : DivOp does not exists.");yyerrok; }
                               | T_DIVOP error T_DIVOP    { yyerror("Error : values does not exists."); yyerrok; }
                               | T_DIVOP values error     { yyerror("Error: DivOp does not exists.");yyerrok; }
															 ;
																 
values:                          values T_COMMA value
                               | value
															 ;	
															
value:                           sign constant
                               | T_STRING

																 ;
sign:                            T_ADDOP 
                               | %empty

																 ;
constant:                        simple_constant
                               | complex_constant

																 ;
simple_constant:                 T_ICONST | T_RCONST | T_LCONST | T_CCONST

																 ;
complex_constant:                T_LPAREN T_RCONST T_COLON sign T_RCONST T_RPAREN

																 ;
statements:                      statements labeled_statement
                               | labeled_statement

																 ;
labeled_statement:               label statement
                               | statement

																 ;
label:                           T_ICONST

																 ;
statement:                       simple_statement
                               | compound_statement

																 ;
simple_statement:                assignment
                               | goto_statement
                               | if_statement
                               | subroutine_call
                               | io_statement
                               | T_CONTINUE
                               | T_RETURN
                               | T_STOP

																 ;
assignment:                      variable T_ASSIGN expression
                               | variable T_ASSIGN T_STRING

																 ;
variable:                        variable T_DOT T_ID                      {hashtbl_insert(hashtbl,$3,NULL,scope);}
                               | variable T_LPAREN expressions T_RPAREN
                               | T_LISTFUNC T_LPAREN expression T_RPAREN
                               | T_ID                                     {hashtbl_insert(hashtbl,$1,NULL,scope);}
                               |variable T_LPAREN error T_RPAREN          { yyerror("Error: expression does not exists."); yyerrok; }
                               |variable T_LPAREN expressions error       { yyerror("Error: ')' does not exists."); yyerrok; }

																 ;
expressions:                     expressions T_COMMA expression
                               | expression

																 ;
expression:                      expression T_OROP expression
                               | expression T_ANDOP expression
                               | expression T_RELOP expression
                               | expression T_ADDOP expression
                               | expression T_MULOP expression
                               | expression T_DIVOP expression
                               | expression T_POWEROP expression
                               | T_NOTOP expression
                               | T_ADDOP expression
                               | variable
                               | simple_constant
                               | T_LENGTH T_LPAREN expression T_RPAREN
                               | T_NEW T_LPAREN expression T_RPAREN
                               | T_LPAREN expression T_RPAREN
                               | T_LPAREN expression T_COLON expression T_RPAREN
                               | listexpression

																 ;
listexpression:                  T_LBRACK expressions T_RBRACK
                                 |T_LBRACK error T_RBRACK        {yyerror("Expression does not exists.\n");yyerrok;}
                                 |T_LBRACK expressions error     {yyerror("RBRACK ] does not exists.\n");yyerrok;}
                                 | T_LBRACK T_RBRACK

																 ;
goto_statement:                  T_GOTO{scope++;} label{scope--;}
                               | T_GOTO{scope++;} T_ID T_COMMA T_LPAREN labels T_RPAREN {hashtbl_insert(hashtbl,$3,NULL,scope);scope--;}

																 ;
labels:                          labels T_COMMA label
                               | label

																 ;
if_statement:                    T_IF T_LPAREN expression T_RPAREN label T_COMMA label T_COMMA label    
                               | T_IF T_LPAREN expression T_RPAREN simple_statement 
                               |T_IF T_LPAREN expression error simple_statement{ yyerror("Error: ')' does not exists."); yyerrok; }                   



																 ;
subroutine_call:                 T_CALL variable

																 ;
io_statement:                    T_READ read_list
                               | T_WRITE write_list

																 ;
read_list:                       read_list T_COMMA read_item
                               | read_item

																 ;
read_item:                       variable
                               | T_LPAREN read_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN  {hashtbl_insert(hashtbl,$4,NULL,scope);}

																 ;
iter_space:                      expression T_COMMA expression step

																 ;
step:                            T_COMMA expression
                               | %empty

																 ;
write_list:                      write_list T_COMMA write_item
                               |write_list error write_item  {yyerrok;}
                               |write_list T_COMMA error     {yyerrok;}
                               | write_item

																 ;
write_item:                      expression
                               | T_LPAREN write_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN   {hashtbl_insert(hashtbl,$4,NULL,scope);}
                               | T_STRING

																 ;
compound_statement:              branch_statement
                               | loop_statement

																 ;
branch_statement:                T_IF T_LPAREN expression T_RPAREN T_THEN{scope++;} body tail{scope--;}

																 ;
tail:                            {scope--;}T_ELSE {scope++;}body T_ENDIF{scope--;}
                               | T_ENDIF{scope--;}
                             

																 ;
loop_statement:                  T_DO {scope++;}T_ID T_ASSIGN iter_space body T_ENDDO                 {hashtbl_insert(hashtbl,$3,NULL,scope);scope--;}
                                 

																 ;
subprograms:                     subprograms subprogram
                               | %empty

																 ;
subprogram:                      header body T_END

																 ;
header:                          type T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN   {hashtbl_insert(hashtbl,$3,NULL,scope);scope++;}
                               | T_LIST T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN {hashtbl_insert(hashtbl,$3,NULL,scope);}  
                               | T_SUBROUTINE T_ID T_LPAREN formal_parameters T_RPAREN      {hashtbl_insert(hashtbl,$2,NULL,scope);scope++;}  
                               | T_SUBROUTINE T_ID                                          {hashtbl_insert(hashtbl,$2,NULL,scope);}

																 ;
formal_parameters:               type vars T_COMMA formal_parameters
                               | type vars




%%


int main(int argc, char *argv[]) {
	int token;

	
	if(!(hashtbl = hashtbl_create(10,NULL))){
    puts("Error failed hashtble to initialize .");
    exit(EXIT_FAILURE);

  }
	
	yyin = fopen(argv[1], "r");

		if (yyin == NULL) {
			printf("%s: File not found\n", argv[1]);
			return 1;
		}
	

  yyparse();
	fclose(yyin);
  hashtbl_destroy(hashtbl);
	
	return 0;
}

/*void yyerror(const char* err){
    error_counter++;
    

    if(error_counter == 5 ){
        printf("Max Errors detected .");
        exit(EXIT_FAILURE);
    }

    yyless(1);  // continue if find error
}*/
