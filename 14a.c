#include <stdio.h>
void main()
{
    int n,q;
    int i, f;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &n, &q);
    printf("numbers between %d and %d are: ", n, q);
    while (n < q)
    {
        f = 0;
        for(i = 2; i <= n/2; ++i)
        {
            if(n % i == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            printf("%d ", n);
        ++n;
    }

}
