// enter list of 5 student.
#include<stdio.h>
struct book
{
	char writer[10],book[10];
	int age;
};
int main()
{

	struct book author1,author2;
	printf("\nENTER DETAILS OF 1st BOOK : \n");
	printf("\n\tENTER NAME OF 1st AUTHOR : ");
	scanf("%s",author1.writer);
	printf("\n\tENTER NAME OF 1st BOOK : ");
	scanf("%s",author1.book);
	printf("\n\tENTER AGE OF 1st AUTHOR : ");
	scanf("%d",&author1.age);
	
	printf("\nENTER DETAILS OF 2nd BOOK : \n");	
	printf("\n\tENTER NAME OF 2nd AUTHOR : ");
	scanf("%s",author2.writer);
	printf("\n\tENTER NAME OF 2nd BOOK : ");
	scanf("%s",author2.book);
	printf("\n\tENTER AGE OF 2nd AUTHOR : ");
	scanf("%d",&author2.age);
	
	if(author1.age<author2.age)
	{
		printf("\nDETAILS OF YOUNGER AUTHOR .\n");
		printf("%s \n\t",author1.writer);
		printf("%s \n\t",author1.book);
		printf("%d \n\t",author1.age);
		printf("\n");
	}
	else
	{
		printf("\nDETAILS OF YOUNGER AUTHOR .\n");
		printf("%s \n\t",author2.writer);
		printf("%s \n\t",author2.book);
		printf("%d \n\t",author2.age);
		printf("\n");
	}

return 1;
}

