#include<stdio.h>
#include<math.h>

#define ll long long
 
int res[1000001];

void sang(){
	for(int i=1;i<=1000000;i++) res[i]=i;
	for(int i=2;i<=1000000;i++){
		if(res[i]==i){
			for(int j=2*i;j<=1000000;j+=i){
				if(res[j]==j) res[j]=i; 
			}
		}
	}
}

void lap(ll n, int k){
	for(int i=1;i<=k;i++){
		n=n+res[n];
	}
	printf("%lld",n);
}

int main(){
	sang(); 
	int n,k; scanf("%d%d",&n,&k);
	lap(n,k);
}
