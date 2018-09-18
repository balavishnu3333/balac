#include<stdio.h>
#include<conio.h>
#include<CTYPE.H>
void main()
{
char i;
clrscr();
printf("Input:");
scanf("%c",i);
if(i=='A'||i=='a'||i=='E'||i=='e'||i=='I'||i=='i'||i=='O'||i=='o'||i=='U'||i=='u')
{
printf("Output: \n vowel ");
}
else if(isalpha(i))
{
printf("Output: \n Consonant");
}
else
{
printf("Output: \n invalud");
}
getch();
}
