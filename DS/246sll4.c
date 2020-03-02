#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int value;
	struct linked_list * next;
}v;

int main()
{
	v *start=0, *node,i;
	int num,count=0;
	printf("\nENTER NUMBER OF ELEMENT YOU WANT TO ADD IN LIST : ");	
	scanf("%d",&num);
	//char ch[2];
	do
	{
		if(start==0)
		{
			node=(v*)malloc(sizeof(v));
			printf("\nENTER AN ELEMENT : ");
			scanf("%d",&node->value);
			node->next=NULL;
			start=node;
			count++;
		}
		else
		{
			node=(v*)malloc(sizeof(v));
			printf("\nENTER AN ELEMENT : ");
			scanf("%d",&node->value);
			node->next=start;
			start=node;
			count++;
		}
	}while(count<num);

	printf("\nENTERED LIST IS : ");
	for(node=start;node;node=node->next)
	{
		printf("%d  ",node->value);
	}
	printf("\n");

return 1;
}
