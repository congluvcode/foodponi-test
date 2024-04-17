#include<stdio.h>
#include<math.h>

int kt(int n){
	int dem=0;
	for(int i=2;i<n;i++){
		if(n%i==0) dem++; 
	}
	if(dem==1) return 1;
	else return 0;
}

int main(){
	int n; scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(kt(i)==1) printf("%d ",i);
	}
}
