#include "stdio.h"
void main()
{
    int n,x;
    scanf("%d",&n);
    x=n%7;
    switch(x)
    {
        case 0:printf("%d天后是星期日\n",n);break;
        case 1:printf("%d天后是星期一\n",n);break;
        case 2:printf("%d天后是星期二\n",n);break;
        case 3:printf("%d天后是星期三\n",n);break;
        case 4:printf("%d天后是星期四\n",n);break;
        case 5:printf("%d天后是星期五\n",n);break;
        case 6:printf("%d天后是星期六\n",n);
        
    }
}

