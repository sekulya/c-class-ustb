#include <stdio.h>
void main()
{
    float a,p,s,t;
    int n;
    scanf("%f,%d,%f",&a,&n,&p);
    t=a*pow((1+p),n)-a;
    s=t*0.8;
    printf("利息:%.0f\n",s);
}
