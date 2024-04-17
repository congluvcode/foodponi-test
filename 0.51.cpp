#include<stdio.h>
#include<math.h>

int count(int n, int p){
	int cnt=0;
	for(int i=p;i<=n;i++){
		int tmp=i;
		while(tmp%p==0){
			cnt++;
			tmp/=p;
		}
	}
	return cnt;
}

int dem(int n,int p){
	int cnt=0;
	while(p<=n){
		cnt+=(n/p);
		p*=p;
	}
	return cnt;
}
int main(){
	int n,p; scanf("%d%d",&n,&p);
	printf("%d",dem(n,p));
}
