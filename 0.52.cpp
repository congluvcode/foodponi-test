#include<stdio.h>
#include<math.h>

int max(int a,int b){
	return a>b? a : b;
}
int dissert(int n){
	int dem1=0,dem2=0;
	for(int i=5;i<=n;i+=5){
		int tmp=i;
		while(tmp%5==0){
			dem1++;
			tmp/=5;
		}
	}
	return dem1;
}

int main(){
	int n; scanf("%d",&n);
	printf("%d",dissert(n));
}
