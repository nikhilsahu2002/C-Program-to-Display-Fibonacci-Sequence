#include<stdio.h>
#include<conio.h>
void main()
{
int num1=0,num2=1,next=0,n = 100;
clrscr();
while (next <= n)
	{
	printf("%d \n",next);
	num1=num2;
	num2=next;
	next = num1 + num2;
	}

getch();
}
