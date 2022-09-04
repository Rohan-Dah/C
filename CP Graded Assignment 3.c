#include<stdio.h> 
#include<stdlib.h> 
 
int main() 
{ 
   FILE *fp; 
   char c_er; 
   int character = 0, space = 0, tab = 0, line = 0; 
   fp = fopen("myworld.txt","r"); 
   if(fp == NULL) 
   { 
     printf("Your file isn't there. Please try again\n"); 
      exit(1); 
   } 
     else  
	 { 
      while(1) 
     { 
        c_er = fgetc(fp); 
        if(c_er == EOF) 
      { 
       break; 
      } 
     character++; 
      if(c_er == ' ') 
     space++; 
      else if(c_er == '\t') 
     tab++; 
      else if(c_er == '\n') 
     line++; 
    } 
    } 
 fclose(fp); 
 printf("\n Total characters present: %d\n", character); 
  printf("\n Total Tabs present: %d\n", tab); 
 printf("\n Total New Lines present: %d\n", line); 
 printf("\n Total Spaces present:  %d\n", space); 
 
} 

/*
Output:=

Total characters present: 61

 Total Tabs present: 0

 Total New Lines present: 0

 Total Spaces present:  11

--------------------------------
Process exited after 0.9259 seconds with return value 28
Press any key to continue . . .

*/
