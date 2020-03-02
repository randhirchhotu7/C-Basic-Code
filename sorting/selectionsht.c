//selection short case 1

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

void shorting(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

void display(int a[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
}
