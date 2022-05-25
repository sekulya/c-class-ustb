#include <stdio.h>
void main ()
{ 
    int a=12,b=5;
    printf("a/b=%d,b/a=%d\n",a/b,b/a);
    printf("%f,%f\n",(float)a/b,(float)(a/b));
    printf("a%%b=%d,b%%a=%d\n",a%b,b%a);
}
