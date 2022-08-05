#include "stdio.h"
#include "math.h"
void main()
{
    float x,x0,x1;
    scanf("%f",&x);
    x1=x/2;
    do
    {
        x0=x1;
        x1=(x0+x/x0)/2;
    }while (fabs(x0-x1)>1e-6);
    printf("sqar of x is:%.3f\n",x1);
}
