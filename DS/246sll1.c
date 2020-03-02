//FINDING ELEMENT IN THE LINKED LIST

#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int value;
	struct linked_list * next;
}sll;

int main()
{
	sll *start=0,*node,i;
	char ch[2];
	do
	{
		if(start==0)
		{
			node=(sll*)malloc(sizeof(sll));
			printf("\nENTER AN ELEMENT FOR LIST : ");
			scanf("%d",&node->value);
			node->next=NULL;
			start=node;
		}
		else
		{
			node->next=(sll *)malloc(sizeof(sll));
			node=node->next;
			printf("\nENTER AN ELEMENT FOR LIST : ");
			scanf("%d",&node->value);
			node->next=NULL;
		}
		printf("\nDO YOU WANT TO INSERT NEW ELEMENT :- Y/N   :   ");
		scanf("%s",ch);
	}while(ch[0]=='Y' || ch[0] == 'y');
	
	
	printf("\nENTERED LIST IS : ");
	for(node=start;node;node=node->next)
	{
		printf("%d  ",node->value);
	}

	int num,count=0;
	printf("\nENTER A NUMBER TO FIND : ");
	scanf("%d",&num);
	for(node=start;node;node=node->next)
	{
		if(num==node->value)	
		{
			count=1;
		}
	}
	if(count == 1)
	{
		printf("\nELEMENT %d IS FOUND IN THE LIST .\n",num);
	}
	else
	{
		printf("\nELEMENT IS NOT FOUND IN THE LIST .\n");
	}
	return 1;
}

