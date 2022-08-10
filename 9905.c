#include "stdio.h"
void main()
{
    char c;
    scanf("%c",c);
   
    while((c=getchar())!='#')
    { if(c>='A'&&c<='W'||c>='a'&&c<='w')
    c=c+3;
    else if(c>='X'&&c<='Z'||c>='x'&&c<='z')
    c=(c+3)-26;
    printf("%c",c);
    }
printf("\n");
}
