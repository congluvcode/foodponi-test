#include<stdio.h>
#include<math.h>

#define ll long long
ll lt(int n, int p){
	ll res=1;
	while(p){
		if(p%2==1){
			res*=n;
		}
		p/=2;
		n*=n;
	}
	return res;
}

int main(){
	int n,p; scanf("%d%d",&n,&p);
	printf("%lld",lt(n,p));
}
