#include"stdio.h"
#include "math.h"
int p(int n)
{
    int i,k=1;
    for(i=1;i<=n;i++)
      k=k*i;
      return k;
}
 int s(int n)
 {
     int i,k=0;
     for(i=1;i<=n;i++)
     {
         k+=p(i);
         
     }
     return k;
 }
 float f(int x,int y)
 {
     float a;
     a=s(x)*1.0/s(y)*1.0;
     printf("%.2f",a);
 }
 void main()
 {
     int x,y;
     scanf("%d,%d",&x,&y);
     f(x,y);
 }
