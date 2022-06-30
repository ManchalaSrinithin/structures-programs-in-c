#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int age;
	float marks;
	
};
int i;
struct student read(struct student*,int);
void display(struct student*,int);
struct student delet(struct student*,int,int);
main()
{
	struct student f[10],h[10],e[10];
	int n,pos;
	int c,ch;
	printf("Enter the no of student records:");
	scanf("%d",&n);
	printf("1.read\n2.display\n3.delete");
	do
	{
	printf("Enter the choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{	
	case 1:for(i=0;i<n;i++)
			{
			f[i]=read(e,n);
			}
		break;
	case 2:
		{
		display(f,n);
		break;
		}
	case 3:
	{
		for(i=0;i<n;i++)
		{
		h[i]=delet(f,pos,n);
		break;
		}
	}
	}
	printf("Enter 1 to continue\n\n");
	scanf("%d",&c);
}while(c==1);
}
struct student read(struct student e[10],int n)
{
	printf("---------\\\student details---------\n");
	scanf("%s%d%f",e[i].name,&e[i].age,&e[i].marks);
	printf("\n");
	return e[i];
}
void display(struct student f[10],int n)
{
	printf("\n name\tage\tmarks");
	for(i=0;i<n;i++)
	printf("\n%s\t%d\t%f",f[i].name,f[i].age,f[i].marks);
	printf("\n---------------\tthank you\t------------");	
}
struct student delet(struct student f[10],int pos,int n)
{
	printf("Enter the position:\n");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
	f[i]=f[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		return f[i];
	}
}