#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
printf("\nenter the character:");
scanf("%c",&ch);
if(ch='a'||ch='A'||ch='e'||ch='E'||ch='i'||ch='I'||ch='o'||ch='O'||ch='u'||ch='U')
printf("\nthe character %c is vowel",ch);
else
printf("\nthe entered character is consonant");
getch();
}
