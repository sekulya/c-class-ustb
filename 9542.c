#include "stdio.h"
void main()
{
    int a=10,b=20;
    char c='A';
    unsigned int n=4294967290;
    float x=12.34567891,y=-987.6543;
    printf("%d%d\n",a,b);
    printf("a=%3d,b=%3d\n",a,b);
    printf("%c,%d,%o,%x\n",c,c,c,c);
    printf("%u,%o,%x,%d\n",n,n,n,n);
    printf("%f,%f\n",x,y);
    printf("%-10.3f,%10.7f\n",x,y);
    printf("%s,%-6.3s,%6.3s\n","student","student","student");
     
}
