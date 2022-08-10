#include "stdio.h"
main()
{
    char s[30];
    void total(char s[]);
    gets(s);
    total(s);
}
void total(char s[])
{
    int letter=0,number=0,space=0,other=0,i;
    for(i=0;s[i]!='#';i++)
    {
        if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A'))
        letter++;
        else if(s[i]<='9'&&s[i]>='0')
        number++;
        else if(s[i]==' ')
        space++;
        else
        other++;
    }
    printf("字母:%d,数字:%d,空格:%d,其他:%d",letter,number,space,other);
}
