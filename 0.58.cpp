#include<stdio.h>
#include<math.h>

int kt(int n){
	int x=sqrt(n);
	if(n==x*x) return 1;
	return 0;
}

int main(){
	int l,r; scanf("%d%d",&l,&r);
	int cnt=0;
	int c1=sqrt(l), c2=sqrt(r);
	if(c1*c1!=l) c1++; 
	for(int i=c1;i<=c2;i++){
		 cnt++;
	}
	printf("%d",cnt);
}
