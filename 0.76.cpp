#include<stdio.h>
#include<math.h>

#define ll long long
int degree(int n, int p){
	int ans=0;
	for(int i=p;i<=n;i*=p){
		ans+=n/i;
	}
	return ans;
}

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

ll counDivision(int n){
	ll res=1;
	for(int i=2;i<=n;i++){
		if(nt(i)) res*=(degree(n,i)+1);
	}
	return res;
}

int main(){
	int n; scanf("%d",&n);
	printf("%lld",counDivision(n));
}
