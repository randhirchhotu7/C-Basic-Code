// Finding a given number in array and replace it by an another number.


#include<stdio.h>
#define max 5
int main()
{
	int a[max],i,g_num=7,flag=0;
	printf("Enter %d number: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	int cng=9;
	printf("New array after replacing : ");
	for(i=0;i<max;i++)
	{	
		if(a[i]==g_num)
		{
			a[i]=cng;
			flag=1;
		}
	//printf("%d ",a[i]);
	}
	if(flag==0)
	{
		printf("Element not found\n");
	}
	for(i=0;i<max;i++)
	{
		printf("%d ",a[i]);
	}
	
	//printf("\n");
return 1;
}
