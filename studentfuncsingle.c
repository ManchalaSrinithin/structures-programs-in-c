#include<stdio.h>
struct student
{
	char name[20];
	int age;
	float marks;
	
}s;
struct student read(struct student);
void display(struct student);
main()
{
	struct student s;
	s=read(s);
	display(s);
}
struct student read(struct student e)
{
	printf("---------\\\student details---------\n");
	scanf("%s%d%f",e.name,&e.age,&e.marks);
	printf("\n");
	return e;
}
void display(struct student f)
{
	printf("\n name\tage\tmarks");
	printf("\n%s\t%d\t%f",f.name,f.age,f.marks);
	printf("\n---------------\tthank you\t------------");
	
}