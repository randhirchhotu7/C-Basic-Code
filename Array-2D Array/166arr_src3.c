// occurance of searching number
			

#include<stdio.h>
# define max 5
int main()
{
	int a[max],i,count=0,g_num;
	printf("Enter %d number: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter a number which you want to count: ");
	scanf("%d",&g_num);
	for(i=0;i<max;i++)
	{	
		if(a[i]==g_num)
		{
			count=count+1;
		}
	}
	printf("\nTotal no of %d is : %d\n\n",g_num,count);
return 1;
}	
