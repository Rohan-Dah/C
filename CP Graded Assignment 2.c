#include<stdio.h> 
#include<ctype.h> 
int main() 
{ 
    FILE*f1; 
     char ch,file_name[50],d; 
     f1=fopen(file_name,"w"); 
     printf("\nEnter your name of file:- \n"); 
     scanf("%s",& file_name); 
     f1=fopen(file_name,"r"); 
        if(f1==NULL) 
    { 
      printf("Your file can't be accessed... \nPlease try againf verifying yourself..."); 
      return (0); 
    } 
      while(ch!=EOF)  
    { 
      d=toupper(ch); 
      printf("%c",d); 
      ch=fgetc(f1); 
    } 
    fclose(f1); 
    } 

/*
Output:-
Enter your name of file:-
myworld.txt

Hi. Welcome to my world... Here you will get to know yourself..
--------------------------------
Process exited after 9.841 seconds with return value 0
Press any key to continue . . .


*/
