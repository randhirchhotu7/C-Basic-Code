//	quick short

#include<stdio.h>
void shorting(int[],int,int,int);
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
	int start=0,last=num-1;
	shorting(a,num,start,last);
	printf("\nSHORTED ARRAY IS : ");
	display(a,num);
	printf("\n");
return 1;
}
void shorting(int a[],int num,int start,int last)	
{
	int b,l,pivot,temp;
	b=start;
	l=last;
	pivot=a[(b+l)/2];
	do
	{
		while(pivot>a[b])
			b++;
		while(pivot<a[l])
			l--;
		if(b<=l)
		{
			temp=a[b];
			a[b]=a[l];
			a[l]=temp;
			b++;
			l--;
		}
	}while(b<=l);
	if(start<l)
		shorting(a,num,start,l);
	if(b<last)
		shorting(a,num,b,last);
}
void display(int a[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
	
}
