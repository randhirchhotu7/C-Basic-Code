//	make list of a person according as their name date of birth and salary.

#include<stdio.h>

struct record
{
	char	name[20];
	int	day;
	char	month[10];
	int	year;
	float 	salary;
};
	
int main()
{
	struct record person;
	printf("\nENTER NAME-AGE(DAY-MONTHS-year)-SALARY OF A PERSON : \n"); 
	scanf("%s %d %s %d %f",person.name  ,&person.day  ,person.month  ,&person.year  ,&person.salary);
	
	printf("%s %d %s %d %f\n",person.name  ,person.day  ,person.month  ,person.year  ,person.salary);
return 1;
}
