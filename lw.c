/*
Name: Rohan R Dahibhate
Batch: B2
Roll no. 255
*/

#include<stdio.h>

int main()
{
	char str[60];
	int i,n;
	printf("Enter the size of string");
	scanf("%d",&n);
	
	printf("enter the char:");
	for(i=0; i<n;i++)
	{
		scanf("%c",&str[i]);
	}
	str[i]='\0';
	
	printf("\nEntered string is:");
	for(i=0; str[i]!='\0';i++)
	{
		printf("%c",str[i]);
    }
    
	for(i=0; str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			str[i]=str[i] + 32;	
		}
		
		else if(str[i]>=97&&str[i]<=122)
		{
			str[i]=str[i] - 32;
		}
    }
    
	
     
    printf("\n converted string is=");
	for(i=0; str[i]!='\0';i++)
	{
		printf("%c",str[i]);
    }
      return 0;
}

/*
Output
Enter the size of string
5
enter the char:
g
o

Entered string is:

g
o
 converted string is=

G
O
--------------------------------
Process exited after 7.956 seconds with return value 0
Press any key to continue . . . .
*/
