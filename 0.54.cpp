#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=n;i++){
		if(n%i==0) return 1;
	}
	return 0;
}

int sum(int n){
	int sum1=0;
	while(n){
		sum1+=n%10;
		n/=10;
	}
	return sum1;
}

int sumgcd(int n){
	int sum2=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum2+=sum(i);
			n/=i;
		}
	}
	if(n!=1) sum2+=sum(n);
	return sum2;
}

int main(){
	int n; scanf("%d",&n);
	sumgcd(n);
	printf("\n");
	printf("%d %d",sum(n),sumgcd(n));
	if(sum(n)==sumgcd(n) && nt(n)) printf("yes");
	else printf("no");
}
