#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int dk1(int n){
	int x=0,m=n;
	while(n){
		x=x*10+n%10;
		n/=10;
	}
	if(x==m) return 1;
	return 0;
}

int dk2(int n){
	int cnt=0,res=0;
	for(int i=2;i<=sqrt(n);i++){
		cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt!=0) res++;
	}
	if(n!=1) res++;
	if(res>2) return 1;
	return 0;
}

int main(){
	int l,r; scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		if(dk1(i) && dk2(i) ) printf("%d ",i);
	}
}
