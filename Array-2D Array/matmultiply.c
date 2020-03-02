// matrix multiplication

#include<stdio.h>
int main()
{
	int a[][],b[][],c[][],i,j,r1,r2,c1,c2;
	printf("ENTER ROW OF 1st MATRIX : ");
	scanf("%d",&r1);
	printf("ENTER COLUMN OF 1st MATRIX : ");
	scanf("%d",&c1);
	printf("ENTER ROW OF 2nd MATRIX : ");
	scanf("%d",&r2);
	printf("ENTER COLUMN OF 2nd MATRIX : ");
	scanf("%d",&c2)
	if(c1==r2)
	{
		printf("ENTER ELEMENTS OF 1st MATRIX");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("ENTER ELEMENTS OF 2nd MATRIX");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
	}
	else
	{
		printf("MULTIPLICATION NOT POSSIBLE .\n");
	}
return 0;
}
