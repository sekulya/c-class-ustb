#include "stdio.h"
void main()
{
    double sum=0.0,a=1,b=1;
    int i=1,k=0;
    while(1/a>=1e-6)
    {
        sum=sum+2/(a+b);
        a*=i;
        b*=k;
        i++;
        k++;
    }
    printf("n=%d,sum=%.4f",i,sum);
}
