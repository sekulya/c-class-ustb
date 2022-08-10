#include "stdio.h"
int max, min;
void CommonDivisor(int m, int n);
void LowesrCommonMultiple(int m, int n);
void main()
{
    int m,n;
    scanf("%d,%d", &m, &n);
    CommonDivisor(m, n);
    LowestCommonMultiple(m, n);
    printf("%d,%d",max, min);
    
}
void CommonDivisor(int m, int n)
{
    int remainder, temp;
    if(n<m)
    { temp=m; m=n; n=temp; }
    remainder=m%n;
    while( remainder !=0)
    {
        m=n;
        n=remainder;
        remainder=m%n;
    }
    max=n;
}
void LowestCommonMultiple(int m, int n) 
{
   min=m*n/max; 
}
