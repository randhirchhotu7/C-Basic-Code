// count number of even in the given array.

#include<stdio.h>
#define max 5
int main()
{
	int i,a[max],count=0;
	printf("Enter %d numbers: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<max;i++)
	{
		if(a[i]%2==0)
		{
			count=count+1;
		}
	}
	printf("Number of even is : %d\n",count);
return 1;
}
