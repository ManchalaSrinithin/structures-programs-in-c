#include<stdio.h>
struct student
{
	char name[20];
	int age;
	float marks;
	
}s1;
main()
{
	struct student s1;
	int i,n;
	printf("---------\\\student details---------\n");
	scanf("%s%d%f",s1.name,&s1.age,&s1.marks);
	printf("\n");
	printf("\n name\tage\tmarks");
	printf("\n%s\t%d\t%f",s1.name,s1.age,s1.marks);
	printf("\n---------------\tthank you\t------------");
	
}