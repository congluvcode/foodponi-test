#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b); 
}

int main(){
	int l,r; scanf("%d%d",&l,&r);
	for(int i=l;i<r;i++){
		for(int j=i+1;j<=r;j++){
			if(gcd(i,j)==1) printf("%d %d",i,j);
			printf("\n");
		}
	}
}
