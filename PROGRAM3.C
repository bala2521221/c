#include<stdio.h>
#include<conio.h>
void main()
{
int a=9,b=3,c;
char ch;
clrscr();
printf("enter the simple:");
scanf("%c",&ch);
switch(ch)
{
case '+':
c=a+b;
printf("sum of the number: %d",c);
break;
case '-':
printf("sub of number: %d",(a-b));
break;
default:
printf("invaild");
break;
}
getch();
}