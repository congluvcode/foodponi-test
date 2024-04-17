#include<stdio.h>
#include<math.h>

int prime(int n){
	int max=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
		}
		if(i>max) max=i;
	}
	if(n>max) max=n;
	return max;
}

int main(){
	int n; scanf("%d",&n);
	printf("%d",prime(n));
}
