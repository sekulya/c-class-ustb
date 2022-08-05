#include "stdio.h"
void main()
{
    int i,j;
    for (i=1;i<=5;i++)
    { for(j=6-i;j>0;j--)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("%c",'A'+i-1);
        printf("\n");
    }
    for(i=1;i<=12;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(j=11-2*i;j>0;j--)
        printf("%c",'F'-i);
        printf("\n");
    }
}
