#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int cmp(const void *a, const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	if(*x%2==0 && *y%2!=0) return -1;
	else if(*x%2!=0 && *y%2==0) return 1;
	else if(*x%2==0 && *y%2==0) return *x-*y;
	else if(*x%2!=0 && *y%2!=0) return *y-*x;
}
int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmp);
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}
