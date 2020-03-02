// sum of array element

#include<stdio.h>
#define max 5
int main()
{
	int a[max],i,f;
	printf("Enter %d number: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
//	f=a[0];
	int sum=0;
	for(i=0;i<max;i++)
	{
			sum=sum+a[i];
	}
	printf("sum  of %d indexes is: %d\n",max,sum);
return 1;
}
	
