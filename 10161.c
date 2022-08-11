#include "stdio.h"
void main()
{
    int i,j,t;
    char str[10];
    for(i=0;i<10;i++)
    scanf("%c",&str[i]);
    for(j=1;j<10;j++)
    for(i=0;i<10-j;i++)
    if(str[i]>str[i+1])
    {t=str[i];str[i]=str[i+1];str[i+1]=t;}
    for(i=0;i<10;i++)
    printf("%c",str[i]);
    printf("\n");
}
