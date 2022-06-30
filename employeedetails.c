#include<stdio.h>
struct employee
{
	char ename[20];
	int age;
	int id;
	char branch[20];
	char desig[20];
	float salar;
	
}s;
main()
{
	struct employee s[100];
	int i,n;
	printf("Enter number of employee details:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the employee details of employee %d:\n",i+1);
		scanf("%s%d%d%s%s%f",s[i].ename,&s[i].age,&s[i].id,s[i].branch,s[i].desig,&s[i].salar);
		printf("\n");
	}
	printf("---------employee details---------\n");
	printf("\n employeename\tage\tid\tbranch\t\tdesignation\tsalary");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t\t%d\t%d\t%s\t\t%s\t\t%f",s[i].ename,s[i].age,s[i].id,s[i].branch,s[i].desig,s[i].salar);
		printf("\n");
	}
}
