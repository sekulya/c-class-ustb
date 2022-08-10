#include "stdio.h"
#include "math.h"
int prime(int n);
void main()
{
    int m,a,b,k;
    for(m=10;m<=100;m++)
    {
        if(prime(m)&&prime(m%10*10+m/10))
        printf("%d,",m);
        
    }
}
prime (int n)
{
    int i;
    for (i=2;i<=n-1;i++)
    if(n%i==0) break;
    if(i==n) return 1;
    else return 0;
    
}
