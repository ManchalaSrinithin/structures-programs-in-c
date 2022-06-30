#include<stdio.h>
struct student  
{
	char sname[20];
	int age;
	char branch[20];
	float marks;
}s;
struct student read(struct student);
main()
{
	struct student s[100];
	int ch,r,i,n;
	printf("Enter the choice:\n");
	scanf("%d",&ch);
	printf("Enter the no of records:\n");
	scanf("%d",&n);
	do
	{
		switch(ch):
			case 1:
				read(s);
	}
	read(s);
}
struct student read(struct student s)
{
	printf("Enter the student details\n");
	scanf("%s%d%s%f",s.sname,&s.age,s.branch,&s.marks);
	printf("\n--------student details--------");
	printf("\nNAME\tAGE\tBRANCH\tMARKS");
	printf("\n%s\t%d\t%s\t%f",s.sname,s.age,s.branch,s.marks);
}