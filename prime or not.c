#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=2;
printf("\nenter a number");
scanf("%d",&n);
for(c=2;c<=n-1;c++)
{
if(n%2==0)
{
printf("\nthe number is not prime:");
}
else
{
printf("\nthe number is prime:");
}
}
getch();
}
