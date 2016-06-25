#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is greatest");
}
else if(b>a && b>c)
{
printf("b is greatest");
}
else if(c>a && c>b)
{
printf("c is greatest");
}
else
{
printf("\nall numbers are equal or any two umbers are equal");
}
getch();
}
