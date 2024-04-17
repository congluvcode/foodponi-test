#include<stdio.h>
#include<math.h>

int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int q; scanf("%d",&q);
	int b[n];
	for(int i=1;i<=n;i++){
		if(i==1) b[i]=a[i];
		else{
			b[i]=b[i-1]+a[i];
		}
	}
	while(q){
		int l,r;
		scanf("%d%d",&l,&r);
		int sum=b[r]-b[l-1];
		printf("%d\n",sum);
	}
}
