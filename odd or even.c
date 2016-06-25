#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
printf("\nenter the positive integer:");
scanf("%d",i);
if(i<0)
{
printf("\nentered number is not positive integer");
}
if(i%2==0)
{
printf("\n%d is even",i);
}
else
{
printf("n%d is odd",i);
}
getch();
}
