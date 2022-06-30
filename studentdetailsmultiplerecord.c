#include<stdio.h>
struct student
{
	char name[20];
	int age;
	float marks;
	char branch[20];
	
}s;
main()
{
	struct student s[100];
	int i,n;
	printf("Enter number of student details:\n");
	scanf("%d",&n);
	printf("---------student details---------\n");
	for(i=0;i<n;i++)
	{
		scanf("%s%d%f%s",s[i].name,&s[i].age,&s[i].marks,s[i].branch);
		printf("\n");
	}
	printf("\n name\tage\tmarks\tbranch");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%d\t%.2f\t%s",s[i].name,s[i].age,s[i].marks,s[i].branch);
		printf("\n");
	}
	
}
