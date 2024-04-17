#include<stdio.h>

int b[100001]={0};
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		int ok=0;
		for(int i=0;i<n;i++){
			if(b[a[i]]==1){
				printf("%d",a[i]);
				ok=1;
				break;
			}
			b[a[i]]=1;
		}
		if(!ok)  printf("-1");
	}
}
