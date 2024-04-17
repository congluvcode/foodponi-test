#include<stdio.h>

int lt(int n, int k){
	int res=1;
	while(k){
		if(k%2==1){
			res*=n;
			res%=10;
		}
		n*=n;
		n%=10;
		k/=2;
	}
	return res;
}

int main(){
	int n,k; scanf("%d%d",&n,&k);
	printf("%d",lt(n,k));
}
