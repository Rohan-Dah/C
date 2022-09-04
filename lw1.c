#include<stdio.h>
void main()
{
	int i, size;
	printf("Enter size:\n");
	scanf("%d",&size);
	char name[size];
	printf("Enter name\n");
	scanf("%s",&name);
	printf("The name is %s\n\n",name);
	
	
	for(i=0; i<size; i++)
	{
		name[i]= name[i]+32;
	}
    printf("\nConverted name is %s",name);
}
