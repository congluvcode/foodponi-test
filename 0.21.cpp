#include<stdio.h>
#include<stdlib.h>

int cnt[30000]={0};

int cmp(const void *a, const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}
int cmp1(const void *a, const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *y-*x;
}
int main(){
	int n; scanf("%d",&n);
	int a[n],b[n],c=0,l=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	qsort(b,n,sizeof(int),cmp1);
	for(int i=0;i<n+n;i++){
		if(i%2==0){
			cnt[i]=a[c++];
		}else cnt[i]=b[l++];
	}
	for(int i=0;i<n+n;i++) printf("%d",cnt[i]);
}
