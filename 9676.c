#include <stdio.h>
void main()
{int year,mon,days,leap;
 scanf("%d.%d",&year,&mon);
 switch(mon)  
 { case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12: days=31;break;
    case 4:
    case 6:
    case 9:
    case 11: days=30;break;
 case 2: if(year%4==0 && year%100!=0 || year%400==0)
        leap=1;
        else
        leap=0;
        if(leap)
        days=29;
        else
        days=28;
}
printf("%d天\n",days);
}
