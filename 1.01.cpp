#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=i) printf("*");
			else printf("~");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n+1-i) printf("*");
			else printf("~");
		}
		printf("\n");
	}
	int x,y; scanf("%d%d",&x,&y);
	for(int i=1;i<=x;i++){
		for(int j=1;j<i;j++){
			printf("~");
		}
		for(int k=1;k<=y;k++) printf("*");
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-1+i;j++){
			if(j<i) printf("~");
			else printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf("~");
			}
		for(int k=1;k<=i;k++){
			if(k==1 || k==i || i==n) printf("*");
			else printf(" ");	
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i) printf("~");
			else{
				if(i==1 || i==n || j==n-i+1 || j==n){
					printf("*");
				}else printf(" ");
			}
		}
		printf("\n");
	}
}
