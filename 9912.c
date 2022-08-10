#include "stdio.h"
#include "math.h"
double  sum(float x[10]);
double average(float x[10]);
void main() 
{
    float x[10];
    int i;
    for(i=0;i<=9;i++)
    scanf("%f",&x[i]);
    printf("sum=%.2f\naverage=%.2f\n", sum(x), average(x));
}
double sum(float x[10])
{
    int i;
    float sum=0.0;
    for(i=0;i<10;i++)
    sum=sum+x[i];
    return sum;
}
double average(float x[10])
{
    return sum(x)/10;
}
