#include<stdio.h>
int main()
{
	int x;
	x=max(15,7);
	printf("%4d",x);
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		printf("%4d",b);
}

