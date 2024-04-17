#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(nt(i)) printf("%d ",i);
		else if(i==1) printf("1 ");
		else if(i%2==1) printf("3 ");
		else if(i%2==0) printf("2 ");
	}
}

