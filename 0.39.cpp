#include<stdio.h>
#include<math.h>

int prime[10000];

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

void init(){
	int cnt=0,i=2;
	while(cnt<10000){
		if(nt(i)){
			prime[cnt]=i;
			cnt++;
		}
		i++;	
	}
}

int main(){
	init();
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d\n",prime[i]);
	}
}
