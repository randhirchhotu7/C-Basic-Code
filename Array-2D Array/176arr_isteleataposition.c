 // adding a certain element at the specific position. 

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
	int pg,value;
	printf("Enter the value to be insert : ");
	scanf("%d",&value);
	printf("Enter the position : ");
	scanf("%d",&pg);
	printf("\nArray after inserting %d at position %d is : ",value,pg);	
	for(i=max;i>pg;i--)
	{	
		a[i]=a[i-1];
	}
	a[pg-1]=value;
	for(i=0;i<=max;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
return 0;
}
