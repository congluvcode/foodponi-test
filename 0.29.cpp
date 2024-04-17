#include<stdio.h>

int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
	int h1,h2; scanf("%d%d",&h1,&h2);
	for(int i=0;i<m;i++){
		int tmp=a[h1-1][i];
		a[h1-1][i]=a[h2-1][i];
		a[h2-1][i]=tmp;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n"); 
}
}
