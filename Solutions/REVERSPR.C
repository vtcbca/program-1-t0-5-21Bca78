#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf("\n Enter eny number:");
	scanf("%d",&a);
	while(a>0)
	{
		c=a%10;
		a=a/10;
		b=b*10+c;
	}
	printf("\n Revers of number is %d",b);
	getch();
}


