#include "stdio.h"
int max(int x, int y) /*max函数*/
{
    int z;
    if(x>y) z=x; else z=y;
    return(z);
    
}
void main() /*主函数*/
{
    int a,b,c;
    scanf("%d,%d",&a,&b);
    c=max(a,b); /*调用max函数，球a和b中大数*/
    printf("max=%d\n",c);
}
