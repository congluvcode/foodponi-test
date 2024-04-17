#include<stdio.h>

#define ll long long
int kt(int n, int k){
	ll res;
	int x=k/(n-1);
	int r=k%(n-1);
	if(r==0) return 1ll*x*n-1;
	else return 1ll*x*n+r;
}

int main(){
	int n,k; scanf("%d%d",&n,&k);
	printf("%lld",kt(n,k));
}
