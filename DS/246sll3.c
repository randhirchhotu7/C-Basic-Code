//	ADDING ELEMENTS OF INSERTED LINKED LIST.

#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int value;
	struct linked_list * next;
}rp;

int main()
{
	rp *start=0,*node,i;
	char ch[3];
	do
	{
		if(start==0)
		{
			node=(rp*)malloc(sizeof(rp));
			printf("\nENTER AN ELEMENT FOR LIST : ");
			scanf("%d",&node->value);
			node->next=NULL;
			start=node;
		}
		else
		{
			node->next=(rp*)malloc(sizeof(rp));
			node=node->next;
			printf("\nENTER AN ELEMENT FOR LIST : ");	
			scanf("%d",&node->value);
			node->next=NULL;
		}
		printf("\nDO YOU WANT TO INSERT NEW ELEMENT :-Y/N  : ");
		scanf("%s",ch);
	}while(ch[0]=='y' || ch[0]=='Y');

	printf("\nENTERED LIST IS : ");
	for(node=start;node;node=node->next)
	{
		printf("%d ",node->value);
	}
	printf("\n");

	int sum=0;
	for(node=start;node;node=node->next)
	{
		sum = sum +node->value;
	}
	printf("\nSUM OF ALL ELENENTS OF LIST IS : %d\n",sum);
return 1;
}
