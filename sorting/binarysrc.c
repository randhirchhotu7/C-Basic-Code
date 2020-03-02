//	binary search

#include<stdio.h>
int search(int[],int,int);
int main()
{
	int a[100],i,num,value,send;
	printf("ENTER A NUMBER : ");
	scanf("%d",&num);
	printf("ENTER %d NUMBER IN SHORTED ORDER : ",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER A VALUE TO CHECK : ");
	scanf("%d",&value);
	send=search(a,num,value);
	if(send==1)
	{
		printf("GIVEN NUMBER %d IS FOUND : \n",value);
	}
	else
	{
		printf("GIVEN NUMBER %d IS NOT FOUND : \n",value);
	}
return 0;
}
int search(int a[],int num,int value)
{
	int start=0,end=num,mid=0,count=0;
	while(start<=end)
	{
		mid=(start + end)/2;
		if(a[mid]==value)
		{
			count=1;
			break;
		}
		else if(a[mid]<value)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}

	}		
	return count;
}
			
