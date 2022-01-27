#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&a);
	for(b=2;b<a;b++)
	{
	     if(a%b==0)
	     {
		c=1;
		break;
	     }
	}
	if(c==1)
		printf("%d is Not prime number",a);
	else
		printf("%d is prime number",a);
	getch();
}