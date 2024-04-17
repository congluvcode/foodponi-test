#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=0;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int kt(int n){
	int cnt,ok=0;
	for(int i=2;i<=sqrt(n);i++){
		cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt==1) return 0;
		if(cnt>1) ok=1;
	}
	if(n!=1) return 0;
	return ok;
}

int main(){
	int l,r; scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		if(kt(i)) printf("%d ",i);
	}
}
