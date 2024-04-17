#include<stdio.h>
#include<math.h>

int tn(int n){
	int sum=0,m=n;
	while(n){
		int r=n%10;
		sum=sum*10+r;
		if(r==9) return 0;
		n/=10;
	}
	if(sum==m) return 1;
	else return 0;
}

int main(){
	int n; scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(tn(i)) printf("%d ",i);
	}
}
