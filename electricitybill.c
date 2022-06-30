#include<stdio.h>
struct eb
{
	char fname[20];
	char lname[20];
	int prunits;
	int punits;
	float total;
	
}s1;
main()
{
	struct eb s1;
	int i,n,unit;
	printf("Enter the previous number of units consumed:\n");
	scanf("%d",&s1.prunits);
	printf("Enter the number of present units consumed:\n");
	scanf("%d",&s1.punits);
	unit=s1.punits-s1.prunits;
	if(unit>=0&&unit<=100)
	{
		s1.total=100+unit*0.80;
	}
	if(unit>=101&&unit<=201)
	{
		s1.total=100+unit*0.90;
	}
	if(unit>=201&&unit<=301)
	{
		s1.total=100+unit*0.1;
	}
	if(unit>300)
	{
		s1.total=100+unit*2;
	}
	printf("---------ELECTRICITY BILL---------\n");
	printf("\nEnter the Firstname and Last name of the consumer:");
	scanf("%s%s",s1.fname,s1.lname);
	printf("\n");
	printf("\nfirstname\t\tlastname\t\tpreviousunits\t\tconsumedunits\t\ttotal");
	printf("\n%s\t\t\t%s\t\t\t%d\t\t\t%d\t\t\t%f",s1.fname,s1.lname,s1.prunits,s1.punits,s1.total);
	printf("\n---------------\tthank you\t------------");
	
}