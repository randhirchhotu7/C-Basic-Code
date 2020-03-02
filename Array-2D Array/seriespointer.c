// how can we return series in the function


#include<stdio.h>
int *series(int n);
int x[100];
int main()
{
	int n,*p,i;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	p=series(n);
	for(i=0;i<n;i++)
	{
		printf("%3d",*p++);
	}
return 0;	
}
int *series(int n)
{
	int i;
	//x[100]; if we declear x her  so it is un avail, for main at start so it 			  show error.
	int a=0,b=1,c;
	for(i=0;i<n;i++)
	{
		x[i]=a;
		c=a+b;
		a=b;
		b=c;
	}
	return x;
}
