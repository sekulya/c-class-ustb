#include <stdio.h>
#define pi 3.14
void main()
{
    float r,h,v;
    scanf("%f,%f",&r,&h);
    v=pi*r*r*h/3;
    printf("体积为:%.2f\n",v);
}
