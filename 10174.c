#include"stdio.h"
#include"string.h"
#define N 100
void delChar(char s[],char ch);
void main()
{   char s[N], s2[N];
	printf("请输入字符串：\n");
	gets(s);
	printf("请输入要删除的字符：\n");
	char ch = getchar();
    delChar(s,ch);
}
void delChar(char s[],char ch)
{
    int i,j;
    for(i=0;s[i]!='\0';i++)
    if(s[i]==ch)
    {
        j=i;
        for(j;s[j]!='\0';j++)
        s[j]=s[j+1];
    }
    printf("%s",s);
}
