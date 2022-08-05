#include "stdio.h"
void main()
{
    int m,s;
    scanf("%d,%d",&m,&s);
    if(m%15!=0) m=(m/15+1)*15;
    s/=1000;
    printf("");
    if(m<=15)printf("5");
    else if (m<=30)printf("10");
    else if (m<=45)printf("12");
    else if (m<=60)printf("%d",14+s);
    else printf("%d",15+2*s);
    printf("\n");
}
