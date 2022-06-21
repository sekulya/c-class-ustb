#include "stdio.h"
void main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    if (!(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a))
    printf("三条边无法构成三角形\n");
    else if(a*a+b*b==c*c || a*a==b*b+c*c || b*b==c*c+a*a)
    printf("这是一个直角三角形\n");
    else if (a==b && b==c)
    printf("这是一个等边三角形\n");
    else if(a==b || b==c || a==c)
    printf("这是一个等腰三角形\n");
    else
    printf("这是一个普通三角形\n");
    
}
