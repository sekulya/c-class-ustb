#include"stdio.h"
#include"string.h"
#define N 100
void main()
{   char s[N];
    int i;
	printf("请输入字符串：\n");
	gets(s);
    //start
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='d')
        continue;
        else
        printf("%c",s[i]);
    }
    printf("\n");
    //end
}
