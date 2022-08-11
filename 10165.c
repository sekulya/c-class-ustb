#include"stdio.h"
#include"string.h"
void main()
{
    char s1[50],s2[50];
    printf("请输入一个字符串:\n");
    gets(s2);
    scpy(s1,s2);
    printf("复制后的字符串为:%s\n",s1);
}
void scpy(char str1[], char str2[])
{ int i;
  for(i=0;str2[i]!='\0';i++)
      str1[i]=str2[i];
  str1[i]='\0';
    
}
