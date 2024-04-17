#include<stdio.h>
#include<string.h>

#define ll long long
int kt(char c[]){
	int d=c[0]-'0', cuoi=c[strlen(c)-1]-'0';
	if(d!=2*cuoi && cuoi!=2*d) return 0;
	int l=1,r=strlen(c)-2;
	while(l<r){
		if(c[l]!=c[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int tn(ll n){
	ll res=0, m=n;
	while(n){
		res=res*10+n%10;
		n/=10;
	}
	if(res==m) return 1;
	return 0;
}

int kt2(ll n){
	int d=n%10;n/=10;
	ll res=0;
	while(n>10){
		res=res*10+n%10;
		n/=10;
	}
	if(d!=2*n && 2*n!=d) return 0;
	if(tn(res)) return 1;
	return 0;
}

int main(){
	ll n; scanf("%lld",&n);
	if(kt2(n)) printf("yes");
	else printf("no");
}
