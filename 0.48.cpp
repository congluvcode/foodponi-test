#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int primenumber(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void dissert(int n){
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0 && primenumber(i)){
			printf("%d ",i);
			n/=i;
		}
	}
	if(n!=1) printf("%d",n);
}

int main(){
	int n; scanf("%d",&n);
	dissert(n);
}
