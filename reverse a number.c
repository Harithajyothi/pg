#include<stdio.h>
#include<conio.h>
void main()
{
int n,reverse=0;
clrscr();
printf("\nenter a number to reverse:");
scanf("%d",&n);
while(n!=0)
{
reverse=reverse*10;
reverse=reverse+n%10;
n=n/10;
}
printf("\nreverse of a entered number is %d",reverse);
getch();
}
