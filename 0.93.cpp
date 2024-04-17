#include<stdio.h>

#define ll long long

int lt(ll x, ll y, ll p){
	ll res=1;
	while(y){
		if(y%2==1){
			res*=x;
			res%=p;
		}
		x*=x;
		x%=p;
		y/=2;
	}
	return res;
}

int main(){
	ll x,y,p; scanf("%lld%lld%lld",&x,&y,&p);
	printf("%lld",lt(x,y,p));
}
