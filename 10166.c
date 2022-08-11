#include <stdio.h>
void main() {
    int a[11] = {2,4,6,8,10,12,14,16,18,20};
	int b,i,n;	
	scanf("%d",&b);	
    //start
    if(b>a[9])a[10]=b;
    else                                                                                                   {
    for(i=0;i<10;i++)
    if(a[i]>b)
    {
        for(n=9;n>=i;n--)
        a[n+1]=a[n];
        a[i]=b;
        break;
    }
    }
    //end
	for(i=0;i<11;i++)
		printf("%d,",a[i]);
	printf("\n");
}
