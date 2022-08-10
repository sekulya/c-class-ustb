#include "stdio.h" 
#include "math.h"
void root1(float a,float b){
 printf("x1=x2=%.2f\n",-b/(2*a));
}; //输出两个相等的实根 
void root2(float a,float b,float c){
 float x1,x2;
 x1=(-b+sqrt(b*b-4*a*c))/2*a;
 x2=(-b-sqrt(b*b-4*a*c))/(2*a);
 printf("x1=%.2f,x2=%.2f\n",x1,x2);
}; //输出两个不相等的实根
void root3(float a,float b,float c){
 float jp,ip,x1,x2;
 jp=-b/(2*a);
 ip=sqrt(4*a*c-b*b)/(2*a);
 printf("x1=%.2f+%.2fi,",jp,ip);
 printf("x2=%.2f-%.2fi\n",jp,ip);
}; //输出两个不相等的虚根 
void main( )
{ 
    //start
    float a,b,c,d;
    scanf("%f,%f,%f",&a,&b,&c);
    if(fabs(a)<1e-6)
       printf("Error\n");
     else 
     {
     d=b*b-4*a*c;
     if(d==0) root1(a,b);
     else if(fabs(d>1e-6)) root2(a,b,c);
     else root3(a,b,c);
     }
    //end
}
    //start
    //end
