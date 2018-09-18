#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,k;
	clrscr();
	printf("input :i,j,k");
	scanf("%d%d%d",&i,&j,&k);
	if(i>j&&i>k)
	{
		printf("Output: %d",i);
	}
	else if(j>k)
	{
		printf("Output: %d",j);		
	}
	else
	{
		printf("Output: %d",k);
	}
	getch()
}
