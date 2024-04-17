#include<stdio.h>
#include<math.h>

int prime[10000];

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int check(int n){
	while(n){
		int r=n%10;
		if(r != 2 && r!=3 && r!=5 && r!=7) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int l,r;
	scanf("%d%d",&l,&r);
	int dem=0;
	for(int i=l;i<=r;i++){
		if(nt(i) && check(i) ) dem++;
	}
	printf("%d",dem);
}
