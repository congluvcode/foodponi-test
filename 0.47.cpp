#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return i;
	}
	return n;
}

int find(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0 && nt(i)) return i;
	}
	return n;
}

int prime[100001];

void sang(){
	for(int i=1;i<=100000;i++) prime[i]=i;
	for(int i=2;i<=sqrt(100000);i++){
		if(prime[i]==i){
			for(int j=i*i;j<=100000;j+=i){
				if(prime[j]==j) prime[j]=i;
			}
		}
	}
}


int main(){
	sang();
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d %d \n",find(i),prime[i]);
	}
}
