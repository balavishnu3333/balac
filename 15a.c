#include<stdio.h> 
int main()
{
    int f1,f2,r,i;
    printf("Enter the interval number for the Range :\n");
    scanf("%d %d",&f1,&f2);
    printf("\n The Even numbers between %d and %d are ",f1,f2); 
    for(i=f1; i<=f2; ++i)
    {
        r = i % 2;
        if(r == 0)
            printf("\n  %d",i);
    }
} 
