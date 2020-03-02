//addition of two mateices
	
#include<stdio.h>
int i,j;
void addition(int[20][20],int[20][20],int[20][20],int);
void display(int [20][20],int);
int main()
{
	int a[20][20],b[20][20],c[20][20],num1,num2,send;
	printf("ENTER SIZE OF 1st 2-d ARRAY : ");
	scanf("%d",&num1);
	printf("\nENTER ELEMENTS OF 1st 2-D ARRAY :\n");	
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ENTER SIZE OF 2nd 2-D ARRAY :  ");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("\nENTER ELEMENTS OF 2nd 2-D ARRAY :\n");
		for(i=0;i<num2;i++)
		{
			for(j=0;j<num2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}

		printf("NEW ARRAY IS : \n");
		addition(a,b,c,num1);
		display(c,num1);

	}
	else
	{
		printf("ADDITION NOT POSSIBLE  .\n");
	}
return 1;
}

void addition(int a[20][20],int b[20][20],int c[20][20],int num1)
{
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}

void display(int c[20][20],int num1)
{
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num1;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
