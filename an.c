#include<stdio.h>
#include<conio.h>
#include<CTYPE.H>
void main()
{
char i;
clrscr();
printf("Input:");
scanf("%c",&i);
if(isalpha(i))
{
printf("Output: \n alphabet");
}
else
{
printf("Output: \n number");
}
getch();
}
