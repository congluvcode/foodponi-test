#include<stdio.h>

int max(int a,int b){
	return a>b ? a : b;
}
int main(){
	int n,t; scanf("%d%d",&n,&t);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	long long sum=a[0]+a[1]+a[2],res=0;
	int idx=0;
	for(int i=0;i<n-3;i++){
		res=max(res,sum);
		sum+=(a[i+3]-a[i]);
		if(sum>=res){
			res=sum;
			idx=i+1;
		}
	}
	printf("%d\n",res);
	for(int i=0;i<3;i++){
		printf("%d ",a[idx+i]);
	}
}
