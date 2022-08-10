#include "stdio.h"
int pear(int x)
{
    if(x==1)
    return 1;
    else
    return (2*(pear(x-1)+1));
}
int main()
{
    int n;
    n=pear(7);
    printf("%d",n);
}
