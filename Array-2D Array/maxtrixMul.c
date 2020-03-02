//	matrix multiplication

#include<stdio.h>
#define MAX 10
void disp(int [][MAX],int ,int);
void get(int [][MAX],int,int);
void matrixMul(int [][MAX],int [][MAX],int [][MAX], int,int,int);

int main()
{
	int a[MAX][MAX]={0},b[MAX][MAX]={0},c[MAX][MAX]={0};
	int r1,c1,r2,c2;

	printf("\nEnter row and col for 1st maxtrix: ");
	scanf("%d %d",&r1,&c1);

	printf("\nEnter row and col for 2nd maxtrix: ");
	scanf("%d %d",&r2,&c2);

	if(c1!=r2)
	{
		printf("\nMultiplication of 2 matrix is not possible.");
	}
	else
	{
		printf("Enter elements for %d x %d 1st matrix...",r1,c1);
		get(a,r1,c1);

		printf("Enter elements for %d x %d 2nd matrix...",r2,c2);
		get(b,r2,c2);

		printf("\nElements of 1st matrix...\n");
		disp(a,r1,c1);

		printf("\nElements of 2nd matrix...\n");
		disp(b,r2,c2);

		matrixMul(a,b,c,r1,c2, c1);

		printf("\nFinal matrix after multiplication...\n");		
		disp(c,r1,c2);
		
	}
	return 1;
}
		
void get(int x[][MAX],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}

void disp(int x[][MAX],int r,int c)
{
		int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%3d",x[i][j]);
		}
	printf("\n");
	}
}

void matrixMul(int a[][MAX], int b[][MAX],int m[][MAX],int r,int c,int k)
{
	int i,j,t;
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m[i][j]=0;
			for(t=0;t<k;t++)
			{
				m[i][j]+=a[i][t]*b[t][j];
			}
		}
	}
}
