#include "stdio.h"
int main()
{
    int i,j,a[6][6];
    for(i=0;i<6;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        if(i>0)
        {
            for(j=1;j<i;j++)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                if(i==j)
                break;
                
            }
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%d,",a[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}
