#include "stdio.h"
void main()
{
    int i,n;
    int f[1000]={1,1};
    scanf("%d",&n);
    for(i=2;i<n;i++)
    f[i]=f[i-2]+f[i-1];
    for(i=0;i<n;i++)
    {
        printf("%d,",f[i]);
        if((i+1)%5==0)
        printf("\n");
    }
}
