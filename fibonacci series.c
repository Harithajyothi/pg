#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,next,c;
clrscr();
printf("\nenter the number of terms:");
scanf(%d",&n);
if(n<0)
{
printf("\ncannot find for negative numbers");
}
printf("FIBONACCI SERIES for %d TERMS",n);
for(c=0;c<n;c++)
{
if(c<=1)
next=c;
else
{
next=a+b;
a=b;
b=next;
}
printf("%d",next);
}
getch();
}
