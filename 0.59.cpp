#include<stdio.h>
#include<math.h>

int kt(int n){
	int sum=n;
	for(int i=1;i<=n/2;i++){
		if(n%i==0) sum+=i;
	}
	return sum;
}

int main(){
	int n; scanf("%d",&n);
	printf("%d",kt(n));
}
