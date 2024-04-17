#include<stdio.h>
#include<math.h>

int prime[10000];

void nt(){
	for(int i=0;i<10000;i++) prime[i]=1;
	prime[0]=prime[1]=0;
	for(int i=2;i<10000;i++){
		if(prime[i]){
			for(int j=i*i;j<10000;j+=i) prime[j]=0;
		}
	}
}

int check(int n){
	while(n){
		int r=n%10;
		if(prime[r]==0) return 0;
		n/=10; 
	}
	return 1;
}

int check1(int n){
	int sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		n/=10; 
	}
	if(prime[sum]) return 1;
	else return 0;
}

int main(){
	nt();
	int l,r;
	scanf("%d%d",&l,&r);
	int dem=0,sum;
	for(int i=l;i<=r;i++){
		if(prime[i] && check(i) && check1(i)) dem++;
	}
	printf("%d",dem);
}
