#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
int i,sum=0,num;
printf("\nenter the integer number);
scanf("%d",&num);
if(num<0)
{
  printf("\nentered number is not natural number");
}
}
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("\nthe sum of %d numbers=%d",num,sum);
getch();
}

