#include<stdio.h>

int lt(int n, int y){
	int res=1;
	while(y){
		if(y%2==1){
			res*=n;
			res%=10;
		}
		n*=n;
		n%=10;
		y/=2;
	}
	return res;	
}

int main(){
	int n; scanf("%d",&n);
	printf("%d",lt(1378,n));
}
