#include "stdio.h"
#include "math.h"
void main()
{
    int i=4,n[6]={0},x=0;
    scanf("%d",&n[5]);
    while(n[5]<(int)pow(10,i))
    i--;
    x=i+1;
    n[i+1]=n[5];
    for (;i>=1;i--)
    {
        n[i]=n[i+1]%(int)pow(10,i);
        n[i+1]=n[i+1]/(int)pow(10,i);
    }
    for (i=1;i<=x;i++)
    printf("%d",n[i]);
}
