#include<stdio.h>
#include<math.h>

int kt(long long n){
	long long x=0,m=n;
	while(n){
		x=x*10+n%10;
		n/=10;
	}
	if(x!=m) return 0;
	return 1;
}

int main(){
	long long n; scanf("%lld",&n);
	if( kt(n)) printf("yes");
	else printf("no");
}
