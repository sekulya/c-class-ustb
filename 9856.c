#include "stdio.h"
void main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(j=11-i;j>0;j--)
        printf("*");
    printf("\n");   
    }
}
