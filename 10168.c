#include <stdio.h>
void fun1(float a[],int N);
void fun2(float a[],int N);
int n1,n2,n3,n4,n5;
void main() {
    int N,i;
    float a[100];	
	printf("输入人数:\n");
	scanf("%d",&N);	
	printf("输入成绩:\n");
	for(i = 0;i < N; i++) 
		scanf("%f",&a[i]);
    fun1(a,N);
    fun2(a,N);
    for(i=0;i<N;i++)
    {
        if(a[i]>=90&&a[i]<=100) n1++;
        else if(a[i]>=80&&a[i]<90) n2++;
        else if(a[i]>=70&&a[i]<80) n3++;
        else if(a[i]>=60&&a[i]<70) n4++;
        else
            n5++;
        }
        printf("90-100:%d\n80-89:%d\n70-79:%d\n60-69:%d\n0-59:%d",n1,n2,n3,n4,n5);
    
}
void fun1(float a[], int N)
{  int i;
   float ave,sum=0;
   for(i=0;i<N;i++)
      sum+=a[i];
   ave=sum/N;
      printf("average:%.2f,",ave);                                                   }
     

void fun2(float a[], int N) 
{
    int i;
    float max=a[0],min=a[0];
    for(i=1;i<N;i++)
    {
        if(a[i]<min){min=a[i];}
        else if(a[i]>max){max=a[i];}
    }
    printf("max:%.2f,min:%.2f",max,min);
    printf("\n");
         
}
