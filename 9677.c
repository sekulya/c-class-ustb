#include "stdio.h"
void main()
{
    int a=0,b=1,c=1,d=3;
    printf("%d,%d,%d,%d\n",a,b,c,a*b && c-d);
    printf("%d,%d,%d,%d\n",a,b,c,c-d && a*b);
    printf("%d,%d,%d,%d\n",a,b,c,--a || ++b && --c);
    int e=0,f=1,g=1;
    printf("%d,%d,%d,%d\n",e,f,g,++f && --g || --e);
}
