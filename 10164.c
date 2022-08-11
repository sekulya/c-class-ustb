#include "stdio.h"
void main()
{
    int a[3][3];
    int sum1=0,sum2=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        scanf("%d,",&a[i][j]);
        for(int i=0;i<3;i++)
        {
            sum1+=a[i][i];
            sum2+=a[i][2-i];
        }
        printf("sum1=%d,sum2=%d\n",sum1,sum2);
}
