// printing in reverse order of each element of a given array 


#include<stdio.h>
#define max 3
int main()
{
	int a[max],i;
	printf("Enter %d number: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	int s,rem,rev;
	for(i=0;i<max;i++)
	{	
		s=0;
		rev=0;
		s=a[i];                 //s is elements of array which is going under reverse 
		while(s>0)                   //reverse condition for each element
		{
			rem=s%10;
			rev=rev*10+rem;
			s=s/10;
		}
		a[i]=rev;
		printf("%d  ",a[i]);
	}
	/*for(i=0;i<max;i++)
	{
		printf("%d  ",a[i]);
	}*/
	printf("\n");
return 1;
}
	
