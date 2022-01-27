/*write a menudriven program to perform following opration.
1. create & print array
2. print array in reverse
3. sum of array element
4. exit
date: 3-jan-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n,s=0;
	char c;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	do
	{
	clrscr();
	printf("\n\t\t Menu:");
	printf("\n\__________________________");
	printf("\n1.create & print array\n2.print array in reverse\n3.sumof array element\n4.exit");
	printf("\n_______________________________");
	printf("\nEnter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			for(i=0;i<=5;i++)
			printf("\nArray a[%d]:%d",i,a[i]);
			break;
		case 2:
			for(i=4;i>=0;i--)
			{
				printf("\nArray a[%d]:%d",i,a[i]);
			}
			break;
		case 3:
			for(i=0;i<=a[i];i++)
			{
				s=s+a[i];
			}
			printf("\nSum of array is%d",s);
			break;
		case 4:exit(0);
		default:
			printf("\nInvalid");
	}
	printf("\nDo you want to cntinue ?(Yes=y/Y,No=N/n):");
	flushall();
	scanf("%c",&c);
	}while(c=='y'||c=='Y');
	getch();
}