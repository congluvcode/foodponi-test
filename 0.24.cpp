#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	long long *x=(long long*)a;
	long long *y=(long long*)b;
	return *x-*y;
}
void sort(long long a[],int n){
	for(int i=0;i<n;i++){
		int m=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[m]) m=j;
		}
		long long tmp=a[m];
		a[m]=a[i];
		a[i]=tmp;
	}
}
int check(long long a[],int n){
	for(int i=n-1;i>1;i--){
		int l=0,r=i-1;
		while(l<r){
			if(a[i]==a[l]+a[r]) return 1;
			else if(a[l]+a[r]<a[i]) l++;
			else if(a[l]+a[r]>a[i]) r--;
		}
	}
	return 0;
}
int main(){
	int n; scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);
		a[i]=1ll*x*x;
	}
	qsort(a,n,sizeof(long long),cmp);
	for(int i=0;i<n;i++) printf("%lld ",a[i]);
	if(check(a,n)) printf("yes");
	else printf("no");
}
