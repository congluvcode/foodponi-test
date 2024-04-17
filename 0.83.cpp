#include<stdio.h>
#include<math.h>

#define ll long long
int sum(ll n){
	int res=0;
	for(int i=1;i<=n;i++){
		res+=(int)pow(-1,i)*i;
	}
	return res;
}

int main(){
	ll n; scanf("%lld",&n);
	printf("%d",sum(n));
}
