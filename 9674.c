#include "stdio.h"
void main()
{
    int x,y;
    scanf("%d",&x);
    if(x<0)
    y=x+10;
    else if (x>=15)
    y=2*x-10;
    else
    y=3*x+5;
    printf("x=%d,y=%d",x,y);
}
