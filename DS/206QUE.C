//program of front and rear queue
#include<stdio.h>
#include<conio.h>
#define MAX 100
int queue[100],front=-1,rear=-1;
void push(int);
int pop();
void main()
{
	int n,i,choice;
	do
	{
	      clrscr();
	 printf("\n1.PUsh");
	 printf("\n2.Pop");
	 printf("\n3.display");
	 printf("\n4.exit");
	 printf("\nENter your choice: ");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	     case 1:printf("\nenter a number: ");
		    scanf("%d",&n);
		    push(n);
		    break;
	     case 2:n=pop();
		    printf("\nDeleted item is :%d",n);
		    break;
	     case 3:printf("\nElements: ");
		    for(i=front;i<=rear;i++)
		    printf("%3d",queue[i]);
		    break;
	     case 4:break;
	     default:printf("invalid choice");
	   }
	    getch();
	    }while(choice!=4);
	 }
       void push(int n)
       {
	  if(rear==MAX-1)
		printf("\n Overflow");
	  else
	  {
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=n;
	 }
       }
	  int pop()
	  {
	     int n;
	     if(front==-1)
	     {
		 printf("\nUnderflow");
		 return 0;
	      }
	      else if(rear==front)
	      {
		 n=queue[front];
		 rear=front=-1;
		 return n;
	      }
	       else
	       {
		  n=queue[front];
		  front++;
		  return n;
		}
	    }


