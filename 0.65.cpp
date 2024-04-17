#include<stdio.h>
#include<math.h>

int gt(int n){
	int res=1;
	for(int i=1;i<=n;i++) res *=i;
	return res;
}
int check(int n){
	int sum=0,m=n;
	while(n){
		int r=n%10;
		sum+=gt(r);
		n/=10;
	}
	if(sum==m) return 1;
	else return 0;
}

int main(){
	int l,r; scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		if(check(i)) printf("%d ",i);
	}
}
