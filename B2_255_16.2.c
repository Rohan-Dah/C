/*
Name: Rohan Dahibhate
Batch: B2
Roll no. 255
*/

#include<stdio.h>
union item
{
	int expense;
	char name[10];	
}
world[30];
void main()
   {
	int ii,jj;
	printf("Enter how many no of items you want:-\t");
	scanf("%d",&jj);
	printf("\n You will shortly get the details of %d items:- \n",jj);
	for(ii=1;ii<=jj;ii++)
	{
	printf("\n\n %d item details: \n",ii);
	printf("\n\n Enter the name of item=\n");
	scanf("%s",world[ii].name);
		printf("\n\n Name: %s",world[ii].name);
	
	printf("\n\nEnter the expense of item:- ");
	scanf("%d",&world[ii].expense);
		printf("\n\n expense=%d",world[ii].expense);
	
    }
	
	}

/*
Output:
Enter how many no of items you want:-   2

 You will shortly get the details of 2 items:-


 1 item details:


 Enter the name of item=
Guitar


 Name: Guitar

Enter the expense of item:- 7


 expense=7

 2 item details:


 Enter the name of item=
Amplifier


 Name: Amplifier

Enter the expense of item:- 10


 expense=10
--------------------------------
Process exited after 21.84 seconds with return value 2
Press any key to continue . . .


*/	
	
	

