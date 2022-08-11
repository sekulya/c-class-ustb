#include"stdio.h"
int main()
{int a[3][3]={1,2,3,1,3,5,2,4,6},sum1,sum2,i;
sum1= sum2=0;
for(int i=0;i<3;i++)
{
    sum1=sum1+a[i][i];
    sum2=sum2+a[i][2-i];
}
printf("sum1=%d,sum2=%d\n",sum1,sum2);
}
