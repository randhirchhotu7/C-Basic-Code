#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
	int a[MAX],c=-1,i,choice;
	do
	{
		clrscr();
		printf("\n1. Insert.");
		printf("\n2. Delete.");
		printf("\n3. Display.");
		printf("\n4. Exit.");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				if(c==MAX)
					printf("\nNo room avail.");
				else
				{
					c++;
					printf("\nEnter a number: ");
					scanf("%d",&a[c]);
				}
				break;
			case 2:
				if(c==-1)
					printf("\nCan not remove");
				else
					c--;
				break;
			case 3:
				printf("\nElements: ");
				for(i=0;i<=c;i++)
				printf("%3d",a[i]);
				break;
			case 4: break;
			default:
				printf("\nInvalid choice");
		}
	   getch();
	}while(choice!=4);
}
