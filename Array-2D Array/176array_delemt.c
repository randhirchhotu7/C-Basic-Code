// delating a certain element from a given array

#include<stdio.h>
#define max 5
int main()
{
	int a[max+10],i,j;
	printf("Enter %d number: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	int pg;
	printf("Enter the position to be delete : ");
	scanf("%d",&pg);	
	printf("\nArray after deleating %d element : ",pg);
	for(i=pg-1;i<max;i++)
	{	
		a[i]=a[i+1];
	}
	a[i]=0;
	for(i=0;i<max;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
return 0;
}
