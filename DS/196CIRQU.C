//circular queue of insertion and deletion
#include<stdio.h>
#include<conio.h>
#define MAX 5
int cq[MAX],rear=-1,front=-1;
void push(int);
int pop();
void main()
{
	int n,i,choice;
	do
	{
		clrscr();
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n4.exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nenter a number: ");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				n=pop();
				printf("\npop item is: %d ",n);
				break;
			case 3:
				printf("\nelements: ");
				for(i=0;i<MAX;i++)
				printf("%3d",cq[i]);
				break;
			case 4:
				break;
			default:
				printf("invalid choice");
		}
		getch();
	}while(choice!=4);
}



void push(int n)
{
	 if((rear==MAX-1&&front==0)||(rear+1==front))
	 {
		   printf("insertion not possible");
	 }
	 else if(front!=0&&rear==MAX-1)
	 {
	      rear=0;
	      cq[rear]=n;
	 }
	 else if(rear<front)
	 {
	      rear++;
	      cq[rear]=n;
	 }
	else
	     {
	     if(rear==-1) front=0;
		 rear++;
		cq[rear]=n;
	    }
}



int pop()
{
	   int n=0;
	   if(front==-1)
	   {
	      printf("\nnot possible");
	      return 0;
	    }
	 else if(front==MAX-1&&rear<front)
	 {
	       n=cq[front];
	       cq[front]=0;
	       front=0;

	      return n;
	   }
	   else if(front == rear)
	   {
		n=cq[front];
		cq[front]=0;
		front=rear=-1;
		return n;
	  }
	  else
	   {
		n=cq[front];
		cq[front]=0;
		front++;
		return n;
	   }


    }