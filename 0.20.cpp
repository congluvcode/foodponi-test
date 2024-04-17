#include<stdio.h>

int cnt[30000]={0};

int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
	}
	int res=0;
	for(int i=0;i<n;i++){
		if(res<cnt[a[i]]) res=cnt[a[i]];
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==res){
			printf("%d",a[i]);
			cnt[a[i]]=0;
		}
	}
}
