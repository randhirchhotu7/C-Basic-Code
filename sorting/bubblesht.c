//	bubble short

#include<stdio.h>
void shorting(int[],int);
int main()
{
	int a[100],i,num;
	printf("ENTER A NUMBER : ");
	scanf("%d",&num);
	printf("ENTER %d NUMBERS : ",num);	
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	shorting(a,num);
	printf("SHORTED ARRAY IS : ");
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}

return 0;
}
void shorting(int a[],int num)
{
	int i,j,temp;
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
				
			
			
	
	

	
