#include<stdio.h>
#include<stdlib.h>
struct	customer 
{
	char name[20];
	long long acno;
	char adres[20];
	int amt1;
	long long int phno;
};
int i;
struct customer read(struct customer*,int);
void display(struct customer*,int);
struct customer delet(struct customer*,int,int);
struct customer append(struct customer*,int,int);
int main()
{
	struct customer f[10],h[10],e[10];
	int choice,r,n,pos;
	printf("Enter the no of records:\n");
	scanf("%d",&n);
	printf("\nEMPLOYEE DETAILS");
	printf("\n===================================================================================");
		do
		{
			printf("\n");
			printf("\n1.read");
			printf("\n2.display");
			printf("\n3.delete");
			printf("\n4.append");
			printf("\nPlease Enter the choice:");
			scanf("%d",&choice);
				switch(choice)
				{
				case 1:
				for(i=0;i<n;i++)
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
					delet(f,pos,n);
					break;
				}
				case 4:
				{
					append(f,pos,n);
					break;
				}
				default:
				 	printf("\n\n\t\tINVALID CHOICE!!!");
			}
			printf("Enter 1 to continue:\n\n");
			scanf("%d",&r);
		}while(r==1);
		return 0;
}
struct customer read(struct customer e[10],int n)
{
	printf("---------customer details---------\n");
	scanf("%s%lld%s%d%lld",e[i].name,&e[i].acno,e[i].adres,&e[i].amt1,&e[i].phno);
	printf("\n");
	return e[i];
}
void display(struct customer f[10],int n)
{
	printf("\n name\t\taccountnumber\t\taddress\t\tamount\t\t phone number");
	for(i=0;i<n;i++)
	{
	printf("\n%s\t\t%lld\t\t%s\t\t%d\t%lld",f[i].name,f[i].acno,f[i].adres,f[i].amt1,f[i].phno);
	}
	printf("\n---------------\tthank you\t------------");	
}
struct customer delet(struct customer f[10],int pos,int n)
{
	printf("\nEnter the position:");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
			f[i]=f[i+1];
	}
	printf("\n name\t\taccountnumber\t\taddress\t\tamount\t\t phone number");
	for(i=0;i<n-1;i++)
	printf("\n%s\t\t%lld\t\t%s\t\t%d\t%lld",f[i].name,f[i].acno,f[i].adres,f[i].amt1,f[i].phno);
}
struct customer append(struct customer f[10],int pos,int n)
{
	printf("\nEnter the position:");
	scanf("%d",&pos);
	for(i=pos;i<n+1;i++)
	{
	scanf("%s%lld%s%d%lld",f[i].name,&f[i].acno,f[i].adres,&f[i].amt1,&f[i].phno);
	}
	for(i=pos-1;i<n;i++)
	{
			f[i+1]=f[i];
	}
	printf("\n name\t\taccountnumber\t\taddress\t\tamount\t\t phone number");
	for(i=0;i<n+1;i++)
	printf("\n%s\t\t%lld\t\t%s\t\t%d\t%lld",f[i].name,f[i].acno,f[i].adres,f[i].amt1,f[i].phno);
}