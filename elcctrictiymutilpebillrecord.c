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
	struct eb s1[100];
	int i,n,unit;
	printf("Enter the number of records:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the previous number of units consumer:%d\n",i+1);
	scanf("%d",&s1[i].prunits);
	printf("Enter the number of present units consumer:%d\n",i+1);
	scanf("%d",&s1[i].punits);
	unit=s1[i].punits-s1[i].prunits;
	if(unit>=0&&unit<=100)
	{
		s1[i].total=100+unit*0.80;
	}
	if(unit>=101&&unit<=201)
	{
		s1[i].total=100+unit*0.90;
	}
	if(unit>=201&&unit<=301)
	{
		s1[i].total=100+unit*0.1;
	}
	if(unit>300)
	{
		s1[i].total=100+unit*2;
	}
	printf("---------ELECTRICITY BILL---------\n");
	printf("\nEnter the Firstname  and Last name of the consumer %d:",i+1);
	scanf("%s%s",s1[i].fname,s1[i].lname);
	printf("\n");
}
	printf("\nfirstname\t\tlastname\t\tpreviousunits\t\tconsumedunits\t\ttotal");
	for(i=0;i<n;i++)
	{
	printf("\n%s\t\t\t%s\t\t\t%d\t\t\t%d\t\t\t%f",s1[i].fname,s1[i].lname,s1[i].prunits,s1[i].punits,s1[i].total);
	}
		printf("\n---------------\tthank you\t------------");
}