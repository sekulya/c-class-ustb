#include "stdio.h"
#include "math.h"
int prime(int n);
void main()
{
    int i,k=0;
    for(i=200;i<=300;i++)
    {
        if(prime(i))
        {
            printf("%d,",i);
            k++;
            if(k%5==0)
            printf("\n");
    
        }
    }
}
 
 
prime(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
      if(n%i==0) break;
       if(i==n)
           return 1;
       else
           return 0;
}
