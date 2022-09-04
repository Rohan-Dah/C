#include<stdio.h>
#include<string.h>
void main()
{
	int len;
	char name[10];
	printf("Enter your name\n");
	scanf("%s",&name);
	
	len= strlen(name);
	printf("\nYour string length is %d",len);
	
	printf("\n\nReverse of your name is %s",strrev(name));
}
