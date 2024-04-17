#include<stdio.h>
#include<math.h>

#define ll long long
ll res[1000000000000000001]={1};

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

ll kt(int a[],ll k){
	ll dem=0;
	for(int i=0;i<=n;i++){
		for(int j=a[i];j<=k;j+=a[i]){
			if(res[j]==1){
				dem++;
				res[j]=0;
			}
		}
	}
	return dem;
}

int main(){
	int n;
	ll k;
	scanf("%d%lld",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%lld",kt(a,k));
}
