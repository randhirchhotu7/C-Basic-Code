//	copying and comparing in structure.

#include<stdio.h>
struct compare
{
	char  name[20];
	int   roll;
	float marks;
};
int main()
{
	int x=0;
	struct compare stu1={"randhir",1,84.50};
	struct compare stu2={"rohit",2,87.00};
	struct compare stu3;
	
	stu3 = stu2;
	x=(stu3.marks==stu2.marks)? 1 : 0;
	
	if(x==1)
	{
		printf("\nstudent2 and student3 are same.\n");	
		printf("\nrecord of student3 : \n");
		printf("\t%s\n\t%d\n\t%f",stu3.name,stu3.roll,stu3.marks);
	}
	else 
	{
		printf("\n student2 and student3 are not same \n");
	}
return 1;
}
	
