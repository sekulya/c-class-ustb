#include "stdio.h"
void main()
{
    float x,y,z1,z2,z3,z4;
    /*键盘输入2个实型数，定义为实型变量x,y。和，和，差，和，差，积，商分别定义为实变量z1,z2,z3,z4*/
    scanf("%f,%f",&x,&y);
    z1=x+y;
    z2=x-y;
    z3=x*y;
    z4=x/y;
    printf("x+y=%.2f\nx-y=%.2f\n",z1,z2); /*输出和，差*/
    printf("x*y=%.2f\nx/y=%.2f\n",z3,z4); /*输出和输出和，商*/
    }
