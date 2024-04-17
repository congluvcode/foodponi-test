#include<stdio.h>
#include<math.h>

#define ll long long

int uoc(ll n){
	ll res=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			res=res-res/i;
			while(n%i==0){
				n/=i;
			}
		}
	}
	return res;
}

int main(){
	long long n; scanf("%lld",&n);
	printf("%lld",uoc(n));
}
