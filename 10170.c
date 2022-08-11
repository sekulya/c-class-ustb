#include <stdio.h>
#define M 20
#define N 20
#define KK 11000
int main() {
    int i,j,a[M][N];
    int m,n;
	printf("请输入行数和列数(不超过20):\n");
	scanf("%d,%d",&m,&n);	
	printf("input the 矩阵:\n");
	for(i=0;i<m;i++){   
        int mx=-KK;
        for(j=0;j<n;j++){ 
            scanf("%d",&a[i][j]);
                if(mx<a[i][j]) mx=a[i][j];
			}
            printf("第%d行:%d\n",i, mx);
    }
 
}
