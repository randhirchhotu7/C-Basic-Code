//linear search

#include<stdio.h>
int search(int[],int ,int);
int main()
{
	int i,a[100],num,send,value;
	printf("\nENTER A NUMBER : ");
	scanf("%d",&num);
	printf("\nENTER %d NUMBER : ",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nENTER A NUMBER TO SEARCH : ");
	scanf("%d",&value);
	send=search(a,num,value);
	if(send==0)
	{
		printf("\nGIVEN NUMBER %d IS NOT FOUND .\n",value);
		printf("\n");
	}	
	else
	{
		printf("\nGIVEN NUMBER %d IS FOUND .\n",value);
		printf("\n");
	}
return 0;
}
int search(int a[],int n,int v)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==v)
		{
			count=1;
			break;
		}
	}
	return count;
}
			
