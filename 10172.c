#include <stdio.h>
#include <string.h>
void scat(char s1[],char s2[]);
int main() {
    char s1[100],s2[100];    
	printf("input the two strings:\n");
	scanf("%s",s1);
	scanf("%s",s2);	
	scat(s1,s2);
	printf("%s\n",s1); 
}
void scat(char str1[],char str2[])
{
    int i=0, j=0;
    while(str1[i]!='\0')
    i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
        str1[i]='\0';
    }
}
