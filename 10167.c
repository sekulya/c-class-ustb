#include "stdio.h"
#include "string.h"
#define N 20
void main()
{   char str[N];
	gets(str);
    //start
    int i,j,k;
    k=strlen(str)-1;
    for(i=0,j=k;i<=j;i++,j--)
    if(str[i]!=str[j]) break;
    if(i>=j) 
    printf("Yes\n");
    else 
    printf("No\n");
    //end
}
