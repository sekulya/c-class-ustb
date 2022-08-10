#include "stdio.h"
#include "math.h"
int prime(int n);
void main()
{
    int m;
    scanf("%d",&m);
    if (prime(m))
     printf("Yes\n");
else 
     printf("No\n");
     
}
prime(int n)
{int i;
    for (i=2; i<=n-1; i++)
         if (n%i==0) break;
    if (i==n)
     return 1;
else 
     return 0;
}
