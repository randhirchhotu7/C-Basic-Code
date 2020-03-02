#include<stdio.h>
int x;
int main()
{
	 x=10;
	printf("%d",x);

	printf("%3d",fun1());
	return 1;

}

int fun1()
{
	 x=x+10;
}
