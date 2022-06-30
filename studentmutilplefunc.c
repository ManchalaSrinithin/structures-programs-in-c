#include<stdio.h>
struct student
{
	char name[20];
	int age;
	float marks;
	
};
struct student read1(int);
main()
{
	struct student e[10];
	int n,i;
	printf("Enter the no of student records:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	e[i]=read1(n);
}
	display(e,n);
	
}
struct student read1(int n)
{
	struct student e[10];
	int i;
	printf("---------\\\student details---------\n");
	scanf("%s%d%f",e[i].name,&e[i].age,&e[i].marks);
	printf("\n");
	return e[i];
}
void display(struct student f[10],int n)
{
	int i;
	printf("\n name\tage\tmarks");
	for(i=0;i<n;i++)
	printf("\n%s\t%d\t%f",f[i].name,f[i].age,f[i].marks);
	printf("\n---------------\tthank you\t------------");
	
}