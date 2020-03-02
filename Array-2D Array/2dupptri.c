// addition of upper triangle elements of a matrix

#include<stdio.h>
int addition(int[][10],int);
int main()
{
	int a[10][10],i,j,num,send;
	printf("ENTER SIZE OF SQUARE MATRIX : ");
	scanf("%d",&num);
	printf("\nENTER ELEMENTS OF MATRIX :\n");
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	send=addition(a,num);
	printf("SUM OF UPPER TRI. ELEMENTS OF MATRIX IS : %d",send);
	printf("\n");
return 0;
}

int addition(int a[][10],int num)
{
	int i,j,sum=0;
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if(i<j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	return sum;
}
