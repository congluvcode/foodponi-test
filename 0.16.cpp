#include<stdio.h>

int max(int a,int b){
	return a>b? a : b;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int a[n],f[n]={0};
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int res=0;
		for(int i=0;i<n;i++){
			f[a[i]]++;
			res=max(res,f[a[i]]);
		}
		for(int i=0;i<n;i++){
			if(f[a[i]]==res){
				printf("%d ",a[i]);
				f[a[i]]=0;
			}
		}
	}
}
