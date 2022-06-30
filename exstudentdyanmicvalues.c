#include<stdio.h>
struct student 
{
	char name[20];
	int age;
	float marks;
	
}*p;
main()
{
	struct student *p;
	int i,n;
	printf("Enter number of student details:\n");
	scanf("%d",&n);
	p=(struct student*)malloc(n*sizeof(struct student));
	printf("---------\\\student details---------\n");
	for(i=0;i<n;i++)
	{
		scanf("%s%d%f",(p+i)->name,&(p+i)->age,&(p+i)->marks);
		printf("\n");
	}
	printf("\n name\tage\tmarks");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%d\t%f",(p+i)->name,(p+i)->age,(p+i)->marks);
		printf("\n");
	}
	
}
