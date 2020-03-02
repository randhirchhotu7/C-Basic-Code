// Find sum of two array and put their result in 3rd array.
		

#include<stdio.h>
#define max 5
int main()
{
	int a[max],b[max],i;
	printf("Enter %d number of 1st array: ",max);	
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d number of 2nd array: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&b[i]);
	}
	int c[max]={0};
	for(i=0;i<max;i++)
	{
		c[i]=a[i]+b[i];	  //c[i] will store sum of array a and b
	}
	printf("Sum of array a and b is: ");
	for(i=0;i<max;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
return 1;
}
