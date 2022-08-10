#include "stdio.h"
int CommonDivisor(int m,int n);
int LowestCommonMultiple(int m,int n);
void main()
{
    int m,n;
    scanf("%d,%d",&m,&n);
    printf("%d,%d\n",CommonDivisor(m,n),LowestCommonMultiple(m, n));
}
int CommonDivisor(int m,int n)
{
    int remainder, temp;
    if(n>m)
    {temp=m; m=n; n=temp;}
    remainder=m%n;
    while(remainder!=0)
    {
        m=n;
        n=remainder;
        remainder=m%n;
    }
    return n;
}
int LowestCommonMultiple(int m, int n)
