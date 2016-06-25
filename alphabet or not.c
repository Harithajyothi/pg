#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
printf("\nenter the character:";
scanf("%c",ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("\nentered character is alphabet");
}
else
{
printf("\nentered character is not a alphabet");
}
getch();
}
