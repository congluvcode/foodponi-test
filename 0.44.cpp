#include<stdio.h>
#include<math.h>

int prime[1000001];

void sieve(){
	for(int i=1;i<=1000000;i++) prime[i]=1;
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(prime[i]){
			for(int j=i*i;j<=1000000;j+=i) prime[j]=0;
		}
	}
}

int main(){
	sieve();
	long long l,r; scanf("%lld%lld",&l,&r);
	int dem=0;
	for(int i=sqrt(l);i<=sqrt(r);i++){
		if(prime[i]) dem++;
	}
	printf("%d",dem);
}
