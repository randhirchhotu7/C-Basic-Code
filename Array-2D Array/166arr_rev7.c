// reverse and print array in reversed order

#include<stdio.h>
#define max 5
int main()
{
	int a[max],i;
	printf("Enter %d numbers: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nReversed array is: ");
	for(i=max-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
return 1;
}
