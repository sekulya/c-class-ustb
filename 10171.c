#include"stdio.h"
#include"string.h"
#define NN 11000
void main()
{
    char str[NN];
    gets(str);
    int tot=0;
    for(int i=0, len=strlen(str); i<len; i++)
    {
        if(i!=0 && i!=len-1 && str[i]==' ') tot++;
    }
    printf("%d\n", tot+1);
}
