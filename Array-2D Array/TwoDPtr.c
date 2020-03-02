#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	
	printf("ENter 3x3 matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	int *p=&a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",*p++);
		}
		printf("\n");
	}
}
