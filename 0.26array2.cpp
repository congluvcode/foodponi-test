#include<stdio.h>
#include<math.h>

int checknt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int max(int a, int b){
	return a>b? a : b;
}
int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int res=0,idx=0;
	for(int i=0;i<n;i++){
		int dem=0;
		for(int j=0;j<m;j++){
			if(checknt(a[j][i])) dem++;
		}
		if(dem>res){
			res=dem;
			idx=i;
		}
	}
	printf("%d\n",idx+1);
	for(int i=0;i<n;i++){
		if(checknt(a[i][idx])) printf("%d ",a[i][idx]);
	}
}
