/*
Name -Yash Tingre
Batch -B2
Roll no 249
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *ptr1;
    char line[100];
    
    int i=0,option;
    printf("CHOOSE THE OPTION \n");
    printf("1.fgets \n");
    printf("2.fgetc \n");
    printf("3.fread \n");
    printf("4.fscanf \n");
    printf("ENTER THE OPTION \n");
    scanf("%d",&option);
    ptr1=fopen("myuniverse.txt","r");
    
    if(ptr1==NULL)
    {
        printf("ERROR WHILE OPENING THE FILE\n");
    }
    else
    {
        printf("THE FILE OPENED SUCCESSFULLY \n\n");
       
    }
switch(option)
{
	case 1:

    while(fgets(line,30,ptr1)!=NULL)
    {
        printf("%s",line);
    }
    fclose(ptr1);
    printf("\n YOUR FILE HAS BEEN CLOSED");
	break;


	case 2:

    for(i=0;line[i]!=EOF;i++)
    {
        line[i]=fgetc(ptr1);
        if(line[i]==EOF)
        break;
        else
		printf("%c",line[i]);
    }
    fclose(ptr1);
    printf("\n YOUR FILE HAS BEEN CLOSED");
	break;

	case 3:

    fread(line,sizeof(int),30,ptr1);
    for(i=0;i<40;i++)
    {
		printf("%c",line[i]);
	}
    fclose(ptr1);
    printf("\n\nYOUR FILE HAS BEEN CLOSED");
	break;


	case 4:
	
    fscanf(ptr1,"%s",&line);
    printf("%s",line);
    fclose(ptr1);
    break;
}
}

/*
OUTPUT
CHOOSE THE OPTION
1.fgets
2.fgetc
3.fread
4.fscanf
ENTER THE OPTION
3
THE FILE OPENED SUCCESSFULLY

This is a test file for 17th program

YOUR FILE HAS BEEN CLOSED
--------------------------------
Process exited after 2.176 seconds with return value 27
Press any key to continue . . .
*/


    
