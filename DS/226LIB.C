#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20]="Ram";
	char str1[20]="hello";
	clrscr();
     /*	//find length;
	int l=strlen(str);
	printf("%d",l);*/

	//str compare
	printf("%d",strcmp(str,str1));
	strcpy(str1,str);
	printf("%s",str1);
	getch();
}

