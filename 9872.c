#include "stdio.h"
int main()
{
    int i,j,k,x;
    x=0;
    for(i=10000;i<=99999;++i)
    {
        if(i%5) continue;
        j=i;
        k=0;
        while(j)
        {
            k+=j%10;
            j/=10;
            
        }
        if(k==9)
        {
            x++;
        }
    }
    printf("%d\n",x);
    return 0;
}
