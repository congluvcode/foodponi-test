#include<stdio.h>
#include<math.h>

int kt(int n, int k){
	int res=0;
	if(n%k==0) return 0;
	return k-n%k;
}

int main(){
	int n, k; scanf("%d%d",&n,&k);
	printf("%d",kt(n,k));
}
