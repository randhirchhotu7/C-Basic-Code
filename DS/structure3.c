//	make list of three students

#include<stdio.h>
struct class
{
	char	name[20];
	int	roll,marks;
};
int main()
{
	struct class student1,student2,student3;
	
	printf("\nENTER RECORD OF 1st STUDENT :\n");
	printf("\nNAME - ROLL- MARKS : \n");
	//printf("\t");
	scanf("%s %d %d",student1.name ,&student1.roll ,&student1.marks);
	
	printf("\nENTER RECORD OF 2nd STUDENT :\n");
	printf("\nNAME - ROLL- MARKS : \n");
	//printf("\t");	
	scanf("%s %d %d",student2.name ,&student2.roll ,&student2.marks);
	
	printf("\nENTER RECORD OF 3rd STUDENT :\n");
	printf("\nNAME - ROLL- MARKS : \n");
	//printf("\t");	
	scanf("%s %d %d",student3.name ,&student3.roll ,&student3.marks);
	
	if(student1.marks > student2.marks && student1.marks > student3.marks)
	{	printf("\n");
		printf("%s SCORE MAXIMUM MARKS : ",student1.name);
		printf("\n\tROLL : %d\n\tMARKS : %d ",student1.roll,student1.marks);
		printf("\n");
	}
	else if(student2.marks > student3.marks)
	{
		printf("\n");
		printf("%s SCORE MAXIMUM MARKS : ",student2.name);
		printf("\n\tROLL : %d\n\tMARKS : %d ",student2.roll,student2.marks);
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("%s SCORE MAXIMUM MARKS : ",student3.name);
		printf("\n\tROLL : %d\n\tMARKS : %d ",student3.roll,student3.marks);
		printf("\n");
	}
return 1;
}
