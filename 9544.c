#include "stdio.h"
void main()
{
    int x,y,z1,z2,z3;
    float z4;
    /*键盘输入2个整型数，键盘输入2个整型数，定义为整型变量x,y。和，差，积，商分别定义为实型变量z1,z2,z3,z4*/
    scanf("%d,%d",&x,&y);
    z1=x+y;
    z2=x-y;
    z3=x*y;
    z4=(float)x/y;
    printf("x+y=%d\nx-y=%d\n",z1,z2);
    printf("x*y=%d\nx/y=%.2f\n",z3,z4);
}
