#include<stdio.h>
struct s1
{
	int inch;
	int feet;
}d1,d2,sum;
main()
{
	printf("Enter the inches of  distance1:\n");
	scanf("%d",&d1.inch);
	printf("Enter the feet of distance1\n");
	scanf("%d",&d1.feet);
	printf("Enter the inches of  distance2:\n");
	scanf("%d",&d2.inch);
	printf("Enter the feet of distance2\n");
	scanf("%d",&d2.feet);
	sum.inch=d1.inch+d2.inch;
	sum.feet=d1.feet+d2.feet;
	while(sum.inch>12)
	{
		sum.inch=sum.inch-12;
		sum.feet++;
	}
	printf("---------distances---------\n");
	printf("\n");
	printf("\ninch\t\tfeet");
	printf("\n%d\t\t\t%d",sum.inch,sum.feet);
	printf("\n---------------\tthank you\t------------");
	
}