#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=5;
clrscr();
for(i=1;i<=k;i++)
{
for(j=1;j<=k-i;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d",(k-i+1));
}
printf("\n");
}
getch();
}