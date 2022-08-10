#include "stdio.h"
int main()
{
    int i,j,k,n=1000;
    
    for(i=10;i<=n;i++)
    
{  k=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                k=k+j;
            }
            
        }
        if(k==i)
        {
            printf("%d ",k);
        }

}
return 0;   
}
