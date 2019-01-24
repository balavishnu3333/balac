#include <stdio.h>
int power(int n1, int n2);
int main()
{
    int base, power, res;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&power);
    res = power(base, power);
    printf("%d^%d = %d", base, powerRaised, result);
    return 0;
}
int power(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}
