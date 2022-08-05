#include "stdio.h"
int main()
{
    int t=0,s=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t+=i;
        s+=t;
    }
    printf("%d",s);
}
