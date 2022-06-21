#include "stdio.h"
void main()
{
    int x=-1,y=5,z=6,k;
    k=x++>=0 && !(y--<=0)||(z=x+y);
    printf("x=%d\ny=%d\nz=%d\nk=%d\n",x,y,z,k);
}
