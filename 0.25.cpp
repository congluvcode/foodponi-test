#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}
int min(int a,int b){
	return a>b? b : a;
}
int main(){
	int t; scanf("%d",&t);
	int dem=0,tmp=1e9-1,res=1e9-1;
	while(t--){
		int n; scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),cmp);
		for(int i=1;i<n;i++){
			tmp=min(tmp,a[i]-a[i-1]);
			if(tmp<res) res=tmp;
			else if(tmp==res) dem++;
		}
	}
	printf("%d ",res);
	printf("%d",dem);
}
