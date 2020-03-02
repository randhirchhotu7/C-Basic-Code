// occcurance of number.


#include<stdio.h>
#define max 10
int main()
{
	int a[max],i;
	printf("Enter %d number: ",max);
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
		for(i=0;i<max;i++)
		{
			if(a[i]==0)
			{
				c0=c0+1;
			}
		        else if(a[i]==1)
			{
				c1=c1+1;
			}
		
			else if(a[i]==2)
			{
				c2=c2+1;
			}
			else if(a[i]==3)
			{
				c3=c3+1;
			}
			else if(a[i]==4)
			{
				c4=c4+1;
			}
			else if(a[i]==5)
			{
				c5=c5+1;
			}
			else if(a[i]==6)
			{
				c6=c6+1;
			}
			else if(a[i]==7)
			{
				c7=c7+1;
			}
   			else if(a[i]==8)
			{
				c8=c8+1;
			}
			else 
			{
				c9=c9+1;
			}
		}
		printf("No of 0 : %d\n",c0);
		printf("No of 1 : %d\n",c1);
		printf("No of 2 : %d\n",c2);
		printf("No of 3 : %d\n",c3);
		printf("No of 4 : %d\n",c4);
		printf("No of 5 : %d\n",c5);
		printf("No of 6 : %d\n",c6);
		printf("No of 7 : %d\n",c7);
		printf("No of 8 : %d\n",c8);
		printf("No of 9 : %d\n",c8);
return 1;
}
