#include "stdio.h"
void main()
{
    int i, n; long p;
    p=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    p=p*i;
    printf("n!=%d\n",p);
}
