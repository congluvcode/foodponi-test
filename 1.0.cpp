#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			if(i==1 || i==n || k==1 || k==2*i-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+i-1 ;j++){
			if(j<=n-i) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n*2-i;j++){
			if(i>j) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
