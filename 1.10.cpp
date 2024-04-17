#include<stdio.h>
#include<math.h>

#define ll long long

ll kt(int a[],int n,ll k){
	ll res[k];
	for(ll i=0;i<=k;i++) res[i]=1;
	ll dem=0;
	for(int i=0;i<n;i++){
		int tmp=a[i];
		for(ll j=tmp;j<=k;j+=tmp){
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
	scanf("%d",&n);
	scanf("%lld",&k);
	int a[n];
	for(int i=0;i<n;i++){
		ll x; scanf("%lld",&x);
		a[i]=x;
	}
	printf("%lld",kt(a,n,k));
}
