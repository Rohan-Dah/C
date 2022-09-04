#include<stdio.h>
#include<string.h>
void main()
{
	char name[10], surname[10];
	printf("enter your name\n");
	scanf("%s",&name);
	printf("\nEnter your surname");
	scanf("%s",&surname);
	strcpy(name,surname);
	printf("Updated string is %s",name);
}
