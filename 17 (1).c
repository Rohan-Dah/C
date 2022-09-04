#include<stdio.h>
#include<string.h>
int main()
{
	int desire;
	FILE *fptr;
	char c_er,im[40];
	printf("Enter your choice:");
	scanf("%d",&desire);
	
	switch (desire)
	{
		case 1:
	
	
	fptr=fopen("fprintf.txt","r"); 
	
	if(fptr==NULL)
	{
		printf("\nFile does not exist!!!");
	}
	else
	{	
		printf("\nThe file is now open for reading.....");
		
		while((c_er=fgetc(fptr))!=EOF)
		printf("%c",c_er);
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
		
		while(fgets(im,50,fptr)!=NULL)
		printf("%s",im);
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
	
		while(fscanf(fptr,"%s",im)!=EOF)
			printf("%s",im);
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
	
		while(fread(im,sizeof(im),90,fptr)!=EOF)
		{
		
		printf("%s",im);
		}
		fclose(fptr);
	}

	
	
	printf("\n\nContents read successfully from the file...");
	printf("\nFile closed!");
	
			
		break;
	}
	
	return 0;
}
