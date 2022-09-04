#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	FILE *fptr;
	char ch,b[50];
	printf("enter the choise");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
	
	
	fptr=fopen("myworld.txt","r"); 
	
	if(fptr==NULL)
	{
		printf("\nFile does not exist!!!");
	}
	else
	{	
		printf("\nThe file is now open for reading.....");
		
		while((ch=fgetc(fptr))!=EOF)
		printf("%c",ch);
	}
	
	fclose(fptr);
	printf("\nFile closed!");
		break;
		
		case 2:
			fptr=fopen("fprintf.txt","r"); 

	if(fptr==NULL)
	{
		printf("\nFile does not exist!!!");
	}
	else
	{	
		printf("\nThe file is now open for reading.....");
		
		while(fgets(b,50,fptr)!=NULL)
		printf("%s",b);
	}
		
	fclose(fptr);
	
	printf("\n\nContents read successfully from the file...");
	printf("\nFile closed!");
			
		break;
		case 3:
	fptr=fopen("fprintf.txt","r"); 
	
	if(fptr==NULL)
	{
		printf("\nFile does not exist!!!");
	}
	else
	{	
		printf("\nThe file is now open for reading.....");
	
		while(fscanf(fptr,"%s",b)!=EOF)
			printf("%s",b);
	}

	fclose(fptr);
	
	printf("\n\nContents read successfully from the file...");
	printf("\nFile closed!");
	
		break;
		case 4:
	fptr=fopen("fprintf.txt","r"); 
	
	if(fptr==NULL)
	{
		printf("\nFile does not exist!!!");
	}
	else
	{	
		printf("\nThe file is now open for reading.....");
	
		while(fread(b,sizeof(b),90,fptr)!=EOF)
		{
		
		printf("%s",b);
		}
		fclose(fptr);
	}

	
	
	printf("\n\nContents read successfully from the file...");
	printf("\nFile closed!");
	
			
		break;
	}
	
	return 0;
}
