#include "stdio.h"
int prime(int n)
{
    int i,k=1;
    for(i=2;i<n;i++)
    if(n%i==0)
    {k=0; break;}
    return k;
}
int main()
{ int m,a,n;
    scanf("%d",&n);
    m=3;
    while(m<n)
    {   a=n-m;
        if(prime(m)&&prime(a))
        {printf("%d=%d+%d",n,m,a);
        break;
    }
    m++;
}
}
   
