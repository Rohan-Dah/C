

/*
Name: Rohan R Dahibhate
Batch: B2
Roll no. 255
*/


#include <stdio.h>
#include <string.h>
int main()
{
	char string1[50],string2[50];
	int choice;
	
	printf("\n1.STRING LENGTH \n2.COPY STRING \n3.STRING REVERSE \n4.STRING CATENATION \n5. STRING COMPARE \n6.SUB STRING ");
	printf("\nSelect your choice =\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\nEnter the string =");
		       scanf("%s",&string1);
		       printf("\nthe length of the string is:%d",strlen(string1));
		       break;
	    case 2:printf("\nEnter the string 1 =");
	           scanf("%s",&string1);
	           printf("\nEnter the string2 =");
	           scanf("%s",&string2);
	           strcpy(string1,string2);
	           printf("\nThe first string is now:=%s",string1);
	    break;
	            
	    case 3:printf("\nEnter a string =");
	           scanf("%s",&string1);
	           printf("\nThe reverse order of the string = %s",strrev(string1));
	    break;
	
	    case 4:
	           printf("\nEnter the first string:");
	           scanf("%s",&string1);
	           printf("\nEnter the second string");
	           scanf("%s",&string2);
	           printf("\nThe string after concatenation is %s",strcat(string1,string2));
	    break;
	    
	    case 5:printf("\nEnter the first string =");
	           scanf("%s",&string1) ;
	           printf("\nEnter the second string to compare =");
	           scanf("%s",&string2);
	           if(strcmp(string1,string2)==0)
	           {
	           	printf("The strings are same!");
			   }
	            else if(strcmp(string1,string2)>0)
	            {  
	              printf("The 1st string is different than 2nd string");
				}
				
	    break;
	
	    case 6:
	           printf("\nEnter the string 1 =");
	           scanf("%s",&string1);
	           printf("\nEnter the string 2 =");
	           scanf("%s",&string2);
	           
	           if(strstr(string1,string2)==0)
	           { 
	             printf("\nSubstring is not present");
			   }
	            else
	            {
	             printf("\nSubstring is present");
				}
				return 0;
	    break;
	
	    default:
		        printf("\nEnter a valid choice!!");
		break;
	}
	return 0;
}

/*
Output
1.STRING LENGTH
2.COPY STRING
3.STRING REVERSE
4.STRING CATENATION
5. STRING COMPARE
6.SUB STRING
Select your choice =

3

Enter a string =Raw

The reverse order of the string = waR
--------------------------------
Process exited after 21.69 seconds with return value 0
Press any key to continue . . .
*/
