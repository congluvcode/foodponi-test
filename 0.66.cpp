#include<stdio.h>
#include<math.h>

int tn(int n){
	int sum=0,m=n;
	while(n){
		sum=sum*10+n%10;
		n/=10;
	}
	if(sum==m) return 1;
	return 0;
}

int dk1(int n){
	int cnt=0,sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		if(r==6) cnt++;
		n/=10;
	}
	if(cnt!=0 && sum%10==8) return 1;
	return 0;
}

int main(){
	int l,r; scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		if(tn(i) && dk1(i)) printf("%d ",i);
	}
}
