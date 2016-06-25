#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,c;
clrscr();
printf("\nenter the number to find factorial:");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
fact=fact*c;
}
printf("factorial of %d is ",n,fact);

getch();
}
