#include <stdio.h>
void main()
{
    char c1,c2;
    int m;
    c1=getchar();
    c2=getchar();
     
    m=((c1-'0')*10+(c2-'0'))*10;
    printf("the result is:%d\n",m);
}
