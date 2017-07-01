#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter a three numbers abc ");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("\n a is largest number");
}
else if(b>c)
{
printf("\n b is largest number");
}
else
{
printf("\n c is largest number");
}
getch();
}
