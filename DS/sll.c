#include<stdio.h>
#include<stdlib.h>
typedef struct e
{
	int info;
	struct e* next;
}link;

int main()
{
	link *start=0,*node;
	char ch[5];
	do
	{
		if(start==0)
		{
			node=(link *)malloc(sizeof(link));
			printf("\nEnter a number: ");
			scanf("%d",&node->info);
			node->next=0;
			start=node;
		}
		else
		{
			node->next=(link*)malloc(sizeof(link));
			node=node->next;
			printf("\nEnter a number: ");
			scanf("%d",&node->info);
			node->next=0;
		}
		//fflush(stdin);
		printf("\nDo you want to continue? ");
		scanf("%s",ch);
	}while(ch[0]=='y'||ch[0]=='Y');
	
	for(node=start;node;node=node->next)
		printf("%3d",node->info);
return 1;
}
