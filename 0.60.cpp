#include<stdio.h>
#include<math.h>

int kt(long long n){
	int sum=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if(n/i!=i) sum+=n/i;
		}
	}
	if(sum==n) return 1;
	else return 0;
}

int main(){
	long long n; scanf("%lld",&n);
	if(kt(n)) printf("yes");
	else printf("no");
}
