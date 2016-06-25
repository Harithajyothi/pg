#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0;temp,rem;
clrscr();
printf("\nenter the number:");
scanf("%d',&num);
if(num<=0)
{
printf("\ncannot find for a negative number");
}
temp=num;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem*rem*rem;
temp=temp/10;
}
if(num==sum)
printf("\nthe number is armstrong number");
else
printf("\nthe number is not armstrong number");
}
