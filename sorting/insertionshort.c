//	insertion short

#include<stdio.h>
void shorting(int[],int);
void display(int [],int);
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
	display(a,num);
	printf("\n");
return 1;
}

void display(int a[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
}
	
void shorting(int a[],int num)
{
	int i,j,temp;
	for(i=1;i<num;i++)
	{
		temp=a[i];
		j=i-1;
		while( (temp<a[j]) && (j>=0) )
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
