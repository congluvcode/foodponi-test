#include<stdio.h>
#include<math.h>

#define ll long long

int powmod(int n, int k){
	int res=0;
	for(int i=1;i<=n;i++){
		res+=i%k;
	}
	return res;
}

int main(){
	int n,k; scanf("%d%d",&n,&k);
	printf("%d",powmod(n,k));
}
