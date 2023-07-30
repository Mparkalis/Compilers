/*
	Μπάρκας Σεραφείμ
	Λυμπερίδης Απόστολος
	Αρχοντούλης  Χρήστος-Κωνσταντίνος
*/
%{ 
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    //#include "token.h"
    //#include "ystype.h"
    #include "syntax.tab.h"

    char *file;

    int str_to_int();
    
    int hex(char *num);
    

	double str_to_double();

    
	char *buffer;

	int buffsize;

    void yyerror(const char* err);
    
    int error_counter = 0;
   
%} 

%option case-insensitive
%option yylineno
%option noyywrap noinput nounput


%x STRING
%x COMMENT


LETTER              [a-zA-Z]
DIGIT               [0-9]
TWODIGIT            [1-9]{DIGIT}*|0
ID                  _{LETTER}+{DIGIT}*(_?({LETTER}|{DIGIT})+)*_|{LETTER}({LETTER}|{DIGIT})*
ICONST              0[Bb]1[0-1]*|([1-9]{DIGIT}*)|0[Hh]([1-9]{DIGIT}*[a-fA-F]*|[a-fA-F]*{DIGIT}*)+|0
POWER				[eE][+-]?([1-9][0-9]*|0)
FLOAT				(([1-9]{DIGIT}*)*|0)?\.(([1-9]({DIGIT}[1-9])*)+|0)
RCONST              (([1-9]{DIGIT}*)*|0)?\.(([1-9]({DIGIT}[1-9])*)+|0)|([1-9]{DIGIT}*|0){POWER}?|(0[hH]([1-9a-fA-F]+[0-9a-fA-F]*)*)\.(([0-9a-fA-F]*[1-9a-fA-F]+)|0)|(0[bB]([1-9a-fA-F]+[0-9a-fA-F]*)*)\.(([0-9a-fA-F]*[1-9a-fA-F]+)|0)
LCONST              \.TRUE\.|\.FALSE\.
CCONST              \'[ \!\"#$%&\'\(\)\*\+\-,\.\/:;<=>\?@\[\\\]^_`\{\|\}~a-zA-Z0-9]\'|\'\\[nftrbv]\'
OROP                \.OR\.
ANDOP               \.AND\.
NOTOP               \.NOT\.
RELOP               \.(GT|GE|LT|LE|EQ|NE)\.
ADDOP               \+|-
DIVOP               \/
MULOP               \*
POWEROP             \*\*
LISTFUNC            C(AD*|D+)R




SPACE               [ \t]



%%



"FUNCTION"          {printf("Found FUNCTION with token id: %d \n",T_FUNCTION); return T_FUNCTION;}
"SUBROUTINE"        {printf("Found SUBROUTINE with token id: %d \n",T_SUBROUTINE); return T_SUBROUTINE;}
"END"               {printf("Found END with token id: %d \n",T_END); return T_END;}
"INTEGER"           {printf("Found INTEGER with token id: %d \n",T_INTEGER); return T_INTEGER;}
"REAL"              {printf("Found REAL with token id: %d \n",T_REAL); return T_REAL;}
"LOGICAL"           {printf("Found LOGICAL with token id: %d \n",T_LOGICAL); return T_LOGICAL;}
"CHARACTER"         {printf("Found CHARACTER with token id: %d \n",T_CHARACTER); return T_CHARACTER;}
"COMPLEX"           {printf("Found COMPLEX with token id: %d \n",T_COMPLEX); return T_COMPLEX;}
"RECORD"            {printf("Found RECORD with token id: %d \n",T_RECORD); return T_RECORD;}
"ENDREC"            {printf("Found ENDREC with token id: %d \n",T_ENDREC); return T_ENDREC;}
"LIST"              {printf("Found LIST with token id: %d \n",T_LIST); return T_LIST;}
"DATA"              {printf("Found DATA with token id: %d \n",T_DATA); return T_DATA;}
"CONTINUE"          {printf("Found CONTINUE with token id: %d \n",T_CONTINUE); return T_CONTINUE;}
"GOTO"              {printf("Found GOTO with token id: %d \n",T_GOTO); return T_GOTO;}
"CALL"              {printf("Found CALL with token id: %d \n",T_CALL); return T_CALL;}
"READ"              {printf("Found READ with token id: %d \n",T_READ); return T_READ;}
"WRITE"             {printf("Found WRITE with token id: %d \n",T_WRITE); return T_WRITE;}
"NEW"               {printf("Found NEW with token id: %d \n",T_NEW); return T_NEW;}
"LENGTH"            {printf("Found LENGTH with token id: %d \n",T_LENGTH); return T_LENGTH;}
"IF"                {printf("Found IF with token id: %d \n",T_IF); return T_IF;}
"THEN"              {printf("Found THEN with token id: %d \n",T_THEN); return T_THEN;}
"ELSE"              {printf("Found ELSE with token id: %d \n",T_ELSE); return T_ELSE;}
"ENDIF"             {printf("Found ENDIF with token id: %d \n",T_ENDIF); return T_ENDIF;}
"DO"                {printf("Found DO with token id: %d \n",T_DO); return T_DO;}
"ENDDO"             {printf("Found ENDDO with token id: %d \n",T_ENDDO); return T_ENDDO;}
"STOP"              {printf("Found STOP with token id: %d \n",T_STOP); return T_STOP;}
"RETURN"            {printf("Found RETURN with token id: %d \n",T_RETURN); return T_RETURN;}

{ICONST}            {yylval.iconst = str_to_int(yytext);printf("Found ICONST '%s' with token id : %d. Base 10 : %d \n",yytext ,T_ICONST ,yylval.iconst);return T_ICONST;}
{RCONST}            {yylval.rconst =str_to_double();printf("Found RCONST '%s' with token id : %d Base 10 : %f  \n",yytext ,T_RCONST ,str_to_double()); return T_RCONST;}
{LCONST}            {yylval.lconst = yytext;printf("Found LCONST '%s' with token id : %d.\n",yylval.lconst,T_LCONST );return T_LCONST;}
{CCONST}            {yylval.cconst = yytext;printf("Found CCONST '%s' with token id : %d.\n",yylval.cconst,T_CCONST ); return T_CCONST;}

{OROP}              {printf("Found OROP %s with token id : %d\n", yytext, T_OROP); return T_OROP; }
{ANDOP}             {printf("Found ANDOP %s with token id : %d\n", yytext, T_ANDOP); return T_ANDOP; }
{NOTOP}             {printf("Found NOTOP %s with token id : %d\n", yytext, T_NOTOP); return T_NOTOP; }
{RELOP}             {printf("Found RELOP %s with token id : %d\n", yytext, T_RELOP); return T_RELOP; }
{ADDOP}             {printf("Found ADDOP %s with token id : %d\n", yytext, T_ADDOP); return T_ADDOP; }
{DIVOP}             {printf("Found DIVOP %s with token id : %d\n", yytext, T_DIVOP); return T_DIVOP; }
{MULOP}             {printf("Found MULOP %s with token id : %d\n", yytext, T_MULOP); return T_MULOP; }
{POWEROP}           {printf("Found POWEROP %s with token id : %d\n", yytext,T_POWEROP);return T_POWEROP;}
{LISTFUNC}          {printf("Found LISTFUNC %s with token id : %d\n", yytext,T_LISTFUNC);return T_LISTFUNC;}

{ID}                {yylval.id = yytext;printf("Found ID '%s' with token id : %d\n",yylval.id,T_ID ); return T_ID; }



\"                              {free(buffer); buffsize = 0; buffer = (char *) malloc(sizeof(char) * buffsize);BEGIN(STRING);}
<STRING>\"                      {BEGIN(INITIAL); yylval.strings = buffer;printf("Found String : '%s'\n ",buffer);return T_STRING;}
<STRING>(\\\n|\\\r\n)           { free(buffer);}
<STRING>(\\.|[^"\\])            {memmove(yytext, yytext+1, strlen(yytext)); buffsize += sizeof(yytext); buffer = (char *) realloc(buffer, sizeof(char) * buffsize); strcat(buffer, yytext); 
                                    /*if (strlen(yytext) == 2){
                                        if(strcmp(yytext,"\\n") == 0){
                                            strcat(str_buf,"\n");
                                        }else if(strcmp(yytext,"\\t") == 0){
                                            strcat(str_buf,"\t");
                                        }else if (strcmp(yytext,"\\r") == 0){
                                            strcat(str_buf,"\r");
                                        }else if (strcmp(yytext,"\\f") == 0){
                                            strcat(str_buf,"\f");
                                        }else if (strcmp(yytext,"\\b") == 0){
                                            strcat(str_buf,"\b");
                                        }else if (strcmp(yytext,"\\v") == 0){
                                            strcat(str_buf,"\v");
                                        }else{
                                            strcat(str_buf,&yytext[1]);
                                        }
                                    }else{
                                        strcat(str_buf,yytext);
                                    }   
     
                                    */
                                }


<STRING>(\n|\r\n)               {yyerror("Found new word without \\");}
<STRING><<EOF>>                 {free(buffer);yyerror("End of string without closing it.");}
<STRING>.                       {buffsize += sizeof(yytext); buffer = (char *) realloc(buffer, sizeof(char) * buffsize); strcat(buffer, yytext);yyerror("Found unknown word.");}







"("					{printf("Found LPAREN %s with token id : %d\n", yytext, T_LPAREN); return T_LPAREN; }
")"					{printf("Found RPAREN %s with token id : %d\n", yytext, T_RPAREN); return T_RPAREN; }
","					{printf("Found COMMA  %s with token id : %d\n", yytext, T_COMMA); return T_COMMA; }
"="			    	{printf("Found ASSIGN %s with token id : %d\n", yytext, T_ASSIGN); return T_ASSIGN; }
"."					{printf("Found DOT    %s with token id : %d\n", yytext, T_DOT); return T_DOT; }
":"					{printf("Found COLON  %s with token id : %d\n", yytext, T_COLON); return T_COLON; }
"["					{printf("Found LBRACK %s with token id : %d\n", yytext, T_LBRACK); return T_LBRACK; }
"]"					{printf("Found RBRACK %s with token id : %d\n", yytext, T_RBRACK); return T_RBRACK; }


"$"                 {BEGIN(COMMENT);}
<COMMENT>.          {}
<COMMENT>\n|\r\n    {BEGIN(INITIAL);printf("##### Line %d #####\n", yylineno);}




{SPACE}             {   }
\n					{printf("##### Line %d #####\n", yylineno); }
<<EOF>>             {printf("End of file %s with token id : %d \n", yytext, T_EOF);return T_EOF;}
.                   {yyerror("Unknown character.");}


%%

/*int main(int argc, char *argv[]) {
	int token;

	file = argv[1];
	yyin = fopen(argv[1], "r");

	if (yyin == NULL) {
		printf("%s: File not found\n", argv[1]);
		return 1;
	}

	printf("##### Line %d #####\n", yylineno); 

	do {
		token = yylex();
	} while (token != T_EOF);
	
	fclose(yyin);
	
	return 0;
}*/

    int hex(char *num) {
    	if (strncmp(num, "0H", 2) == 0 || strncmp(num, "0h", 2) == 0) {
    		return 1;
    	}
    	return 0;
    }

	int bin(char *num){
		if (strncmp(num, "0B", 2) == 0 || strncmp(num, "0b", 2) == 0) {
    		return 1;
    	}
    	return 0;
	}



      

    double str_to_double() {

    
	    char *num = (char *) malloc(sizeof(char) * yyleng);
	    memcpy(num, yytext, yyleng);

    
	    	if (strstr(num, "e") != NULL || strstr(num, "E") != NULL) {
	    		/* For power */
	    		char e;
	    		if (strstr(num, "e") != NULL) {
	    			e = 'e';
	    		} else {
	    			e = 'E';
	    		}
	    		char *base;
	    		char *power;
	    		base = strtok(num, &e);
	    		power = strtok(NULL, &e);
	    		return pow((double) atof(base), (double) atof(power));
	    	}
	    	
	
    
	  	double number = 0.0;
   	 	int i,length_real;
    	char *character;
    	character = strchr(yytext,'.');
  		length_real = strlen(character)-1;
    

    			if(strncmp(yytext,"0b",2) == 0 | strncmp(yytext,"0B",2) == 0 ){
    			    number = (int)strtol(&yytext[2],&character,2);
    			   //binary
    			 for(i=1;i<=length_real;i++){
    			    number += (character[i] - '0') * (1 / pow(2,i));
    			 }
			
    			}else if(strncmp(yytext,"0h" , 2) == 0 | strncmp(yytext,"0H" , 2) == 0){
    			    //hex
    			    number = (int)strtol(&yytext[2],&character,16);
    			    for(i=1;i<=length_real;i++){
    			        if(character[i] <= '9' ){
    			                number += (character[i] - '0') * (1 / pow(16,i));
    			        }else{
    			            number += (character[i] + 10 - 'a') * (1 / pow(16,i));
    			        }
			
    			    }
			
			
    			}else{
				
    			    return (double) atof (yytext); 
    			}
    	return number;
   


	}
	/*double str_to_double() {
    
	    char *num = (char *) malloc(sizeof(char) * yyleng);
	    memcpy(num, yytext, yyleng);

    
	    	if (strstr(num, "e") != NULL || strstr(num, "E") != NULL) {
	    		/* For power */
	    	/*	char e;
	    		if (strstr(num, "e") != NULL) {
	    			e = 'e';
	    		} else {
	    			e = 'E';
	    		}
	    		char *base;
	    		char *power;
	    		base = strtok(num, &e);
	    		power = strtok(NULL, &e);
	    		return pow((double) atof(base), (double) atof(power));
	    	}
	    	/* For not power */
	    /*	return (double) atof(num);
	
	}*/


     void yyerror(const char* err){
      error_counter++;
      printf("ERROR at LINE %d , '%s'  %s \n",yylineno,yytext,err);

     if(error_counter == 5 ){
          printf("Max Errors detected .");
    	  exit(EXIT_FAILURE);
        }

      yyless(1);  // continue if find error
    }
    
    int str_to_int(char* str) {
    	char *num = (char *) malloc(sizeof(char) * yyleng);
	memcpy(num, yytext, yyleng);
	if (hex(num)) {
		return (int) strtoll(&num[2], NULL, 16);
	} else if (bin(num)){
		return (int) strtoll(&num[2], NULL, 2);
	}else {
		return atoi(num);
	}
    }


