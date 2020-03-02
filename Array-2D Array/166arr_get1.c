// finding greater element in the array


#include<stdio.h>
#define max 5
int main()
{
	int i,a[100],get;	 
	printf("Enter %d numbers: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	get=a[0];
	for(i=1;i<max;i++)
	{
		if(a[i] > get)
		{
			get=a[i];
		}
	}
		if(i==max)
		{
			printf("get num is : %d\n",get);
		}	
return 1;
}


