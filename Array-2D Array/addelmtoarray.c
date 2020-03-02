// adding an element at certain position. 

#include<stdio.h>
int main()
{
	int a[100],i,num;
	printf("Enter no of element : ");
	scanf("%d",&num);
	printf("Enter %d number : ",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	int pg,value;
	printf("Enter a value to be insert : ");
	scanf("%d",&value);
	printf("Enter a position : ");
	scanf("%d",&pg);
	printf("Array after inserting %d is : ",value);	
	for(i=num;i>=pg;i--)	
		a[i]=a[i-1];
	a[pg-1]=value;
	for(i=0;i<=num;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
return 0;
}
