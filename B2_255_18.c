/*
Name: Rohan Dahibhate
Batch: B2
Roll no 255
*/
#include<stdio.h>
#include<string.h>

void main()
{
	int choice,c;
	char bob[90],d;
	FILE *fl;
	printf("Enter what do want to do out of the below \n1) fputs \n2) fputc \n3) fprintf \n4) fwrite\n");
	scanf("%d",&choice);
	
 switch (choice)
	
	{
	case 1:
	fl=fopen("puts.txt","w");
	printf("\nYour file is currently open for writting..");
	gets(bob);
	printf("\nEnter the name of the file: ");
	gets(bob);
	fputs(bob,fl);
	fclose(fl);
	printf("\nYour file is successfully written ");
	printf("\nYour file is being closed!");
	break;
	
	case 2:
	fl=fopen("fputc.txt","w");
	printf("\nYour file is here...Open for writing.....");
	
	printf("\nEnter your name of the file: ");
	
	
	for(c=0;c!='!';c++)
	{
	scanf("%c",&d);
	fputc(d,fl);
	}
	fclose(fl);
	printf("\nYour file is closed!");
	
		
	break;
	
	case 3:
	fl=fopen("fprintf.txt","w");
	
	printf("\nYour file is currently open for writting.....");
	gets(bob);
	printf("\nEnter the content to be written in file enter  ");
	gets(bob);
	fprintf(fl,bob);
	
	fclose(fl);
	
	printf("Contents are written successfully into the file...");
	printf("\nFile closed!");
	break;
	case 4:
	fl=fopen("fwrite.txt","w");
	
	printf("\nYour file is currently open for writting.....");
	gets(bob);
	printf("\nEnter the name of file:-  ");
	gets(bob);
	
	fwrite(bob,sizeof(bob),1,fl);
	
	fclose(fl);
	
	printf("Your data is succcessfully written... ");
	printf("\nYour file is closed...");
		
	break;	
	}
}

/*
output:

Enter what do want to do out of the below
1) fputs
2) fputc
3) fprintf
4) fwrite
1

Your file is currently open for writting..
Enter the name of the file: myworld.txt

Your file is successfully written
Your file is being closed!
--------------------------------
Process exited after 10.55 seconds with return value 27
Press any key to continue . . .



*/
