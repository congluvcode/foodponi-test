#include<stdio.h>
#include<math.h>

int prime[10001];

void sieve(){
	for(int i=0;i<=10000;i++) prime[i]=1;
	prime[0]=prime[1]=0;
	for(int i=2;i<=10000;i++){
		if(prime[i]){
			for(int j=i*i;j<=10000;j+=i) prime[j]=0;
		}
	}
}

int main(){
	sieve();
	int n; scanf("%d",&n);
	int dem=0;
	for(int i=2;i<=n/2;i++){
		if(prime[i] && prime[n-i]) dem++;
	}
	printf("%d",dem);
}
