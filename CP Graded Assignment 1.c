#include <stdio.h> 
#include <stdlib.h> // For exit() 
int main() 
{ 
   FILE *fptr1, *fptr2; 
   char file_name[50], c; 
   printf("Enter your name of file to open for reading \n"); 
   scanf("%s", file_name); 
   // Opening the file in your system for reading...

   fptr1 = fopen(file_name, "r"); 
   if (fptr1 == NULL)  
    { 
     printf("Unable to open file %s...\n Please verify yourself\n \n", file_name); 
     exit(0); 
    }  

     printf("\nEnter your another name of file to open for writing \n"); 
     scanf("%s", file_name); 
     // Open the another file in your system for writing...

     fptr2 = fopen(file_name, "w"); 
     if (fptr2 == NULL) 
    { 
     printf("Unable to open file %s....\n Please verify yourself \n\n", file_name); 
     exit(0); 
    } 
     // Reading the context of your file...

 c = fgetc(fptr1);  while (c != EOF) 
 { 
 fputc(c, fptr2); 
 c = fgetc(fptr1); 
 } 

 printf("\n\nYour content is successfully copied to %s", file_name); 
 fclose(fptr1); 
 fclose(fptr2); 
 return 0; 
} 

/*
Output:

Enter your name of file to open for reading
myworld.txt

Enter your another name of file to open for writing
myuniverse.txt


Your content is successfully copied to myuniverse.txt
--------------------------------
Process exited after 13.67 seconds with return value 0
Press any key to continue . . .


*/



