#include <stdio.h>
#include <math.h>
void main()
{
    int d;
    scanf("%d",&d);
    if(d<0)
    {d=-d,printf("八进制数:-%o\n十六进制数:-%x\n",d,d);}
    else printf("八进制数:%o\n十六进制数:%x\n",d,d);
}
