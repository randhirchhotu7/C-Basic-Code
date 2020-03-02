//find length of a string
#include<stdio.h>
#include<conio.h>
int len(char []);
void main()
{
	char fstr[20],lstr[20];int l;
	clrscr();
	printf("\nEnter first name: ");
	gets(fstr);
	printf("\nEnter last name: ");
	gets(lstr);
	l=len(fstr)+len(lstr);
	printf("\nLength of a string is :%d",l);
	getch();
}
int len(char str[])
{
	int i;
	for(i=0;str[i]!=0;i++);
	return i;
}



