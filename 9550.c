#include "stdio.h"
void main()
{
    char b;
    b=getchar();
    printf("字符:%c\n前导字符:%c\n后续字符:%c",b,b-1,b+1);
    
}
