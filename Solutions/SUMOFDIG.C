#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,sum=0;
	clrscr();
	while(a<=3)
	{
		sum=sum+a;
		a=a+1;
	}
	printf("\nsum of 3 digit is %d",sum);
	getch();
}
