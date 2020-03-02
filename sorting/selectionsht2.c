//selection short case 2

#include<stdio.h>
void shorting(int[],int);
int main()
{
	int a[100],i,j,num;
	printf("\nENTER A NUMBER : ");
	scanf("%d",&num);
	printf("\nENTER %d NUMBERS : ",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}	
	shorting(a,num);
	printf("\nSHORTED ARRAY IS : ");
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
return 1;
}
void shorting(int a[],int n)
{
	int i,j,min,temp,pos;
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		pos=0;
		min=a[i];
		for(j=i;j<n;j++)
		{
			if(a[j]<=min)
			{
				min=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
}

	
