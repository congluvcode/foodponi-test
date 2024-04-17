#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int maxend(int n){
	int x=n%10;
	while(n){
		n/=10;
		int y=n%10;
		if(y>x) return 0;
	}
	return 1;
}

int main(){
	int n; scanf("%d",&n);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(nt(i) && maxend(i)){
			printf("%d ",i);
			cnt++;
		}
	}
	printf("\n%d",cnt);
}
