#include<stdio.h>

#define ll long long
int kt(int n, ll k){
	int res=0;
	for(int i=1;i<=n;i++){
		res+=i%k;
	}
	return res;
}

int main(){
	int n; scanf("%d",&n);
	ll k; scanf("%lld",&k);
	printf("%d",kt(n,k));
}
