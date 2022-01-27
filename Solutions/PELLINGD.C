#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,r,s=0;
	clrscr();
	printf(" Enter number: ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
		printf("\n Pellingdrome number");
	else
		printf("\n Not Pellingdrome number");
	getch();
}


