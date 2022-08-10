#include "stdio.h"
#include "math.h"
float f(int n,float x)
{
    if(n==1)
    printf("%.2f",pow(x,3)+x-1);
    else if(n==2)
    printf("%.2f",pow(x+5,3)+(x+5)-1);
    else 
    printf("%.2f",pow(sin(x),3)+sin(x)-1);
}
void main()
{
    int n;
    float x;
    scanf("%d,%f",&n,&x);
    f(n,x);
}
