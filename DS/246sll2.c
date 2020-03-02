//	print record of N employed

#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int  id;
	char name[20];
	float  sal;
	struct linked_list * next;
}sll;

int main()
{
	sll *start=0,*node,i;
	int num,count=0;
	printf("\nENTER NUMBER OF EMPLOYED YOU WANT TO ADD : ");	
	scanf("%d",&num);
	do
	{	if(start==0)
		{
			printf("\nENTER RECORD OF %d EMPLOYEE",count+1);
			node=(sll*)malloc(sizeof(sll));
			printf("\n\n\tENTER ID OF PERSON : ");
			scanf("%d",&node->id);
			printf("\tNAME OF PERSON : ");
			scanf("%s",node->name);
			printf("\tENTER SALARY : ");
			scanf("%f",&node->sal);
			node->next=NULL;
			start=node;
			count++;
		}
		else
		{
			printf("\nENTER RECORD OF %d EMPLOYEE",count+1);			
			node->next=(sll*)malloc(sizeof(sll));
			node=node->next;
			printf("\n\n\tENTER ID OF PERSON : ");
			scanf("%d",&node->id);
			printf("\tNAME OF PERSON : ");
			scanf("%s",node->name);
			printf("\tENTER SALARY : ");
			scanf("%f",&node->sal);
			node->next=NULL;
			count++;
		}
	}while(count<num);
	
	printf("\nRECORD OF NEW EMPLOYEE .\n");	
	for(node=start;node;node=node->next)
	{
		printf("\tID NO : %d\n",node->id);
		printf("\tNAME  : %s\n",node->name);
		printf("\tSALAY : %6.2f\n",node->sal);
		printf("\n");
	}

	
return 1;
}
