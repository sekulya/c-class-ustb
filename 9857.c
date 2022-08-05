#include "stdio.h"
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=17-i;j>0;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",2*j-1);
    printf("\n");  
    }
    for(i=6;i<=10;i++)
    {
        for(j=16-i+(6-i);j>0;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",2*j-1);
    printf("\n");
    }
}
