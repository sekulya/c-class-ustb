#include "stdio.h"
void main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<i+1;j++)
         printf(" ");
        for(j=1;j<=21-2*i;j++)
         printf("*");
    printf("\n");
    }
}
