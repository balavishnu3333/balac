#include <stdio.h>
void main()
{
  int n1, n2, i, j, f;
  printf("Enter two numbers(intevals): ");
  scanf("%d %d", &n1, &n2);
  printf("Prime numbers between %d and %d are: ", n1, n2);
  for(i=n1+1; i<n2; ++i)
  {
      f=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          f=1;
          break;
        }
      }
      if(f==0)
        printf("%d ",i);
  }
}
