#include "stdio.h"
void main()
{
    int a,b,c,d;
    a=40000;
    b=40000/3600;
    c=(40000-3600*b)/60;
    d=40000-3600*b-60*c;
    printf("%d:%d:%d\n",b,c,d);
}
