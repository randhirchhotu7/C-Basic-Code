#include<stdio.h>
typedef struct l
{
	int info;
	struct l * next;
}link;

int main()
{
	link x,y,z,*i;
	x.info=9;
	y.info=10;
	z.info=20;
	
	x.next=&y;
	y.next=&z;
	z.next=0;

	for(i=&x;i;i=i->next)
	{
		printf("%d",i->info);
	}
return 1;
}
