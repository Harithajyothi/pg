#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
int i,sum=0,num;
printf("\nenter the integer number);
scanf("%d",&num);
for(i=1;i<=num;i++)
{
  if(i<0)
  {
    printf("\nentered number is not natural number");
  }
sum=sum+i;
}
printf("\nthe sum of %d numbers=%d",num,sum);
getch();
}

