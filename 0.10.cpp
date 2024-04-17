#include<stdio.h>

int max(int a,int b){
	return a>b ? a : b;
}
int main(){
	int n; scanf("%d",&n);
	int a[n], b[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int sum1=0,sum2=-1e9-1;
	for(int i=0;i<n;i++){
		 sum1+=a[i];
		 sum2=max(sum2,sum1);
		 if(sum1<0) sum1=0;
	}
	printf("%d",sum2);
}
