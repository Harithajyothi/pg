#include<stdio.h>
#include<conio.h>
void main()
{
int n,reverse=0,temp;
printf("\nenter the number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(n==reverse)
{
printf("\nthe number %d is a palindrome",n);
}
else
{
printf("\nthe number %d is not a palindrome",n);
}
getch();
}
