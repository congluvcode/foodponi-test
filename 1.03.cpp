#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if((i+j)%2==0){
				printf("1 ");
			}else printf("0 ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int cnt=i;
		for(int j=1;j<=n;j++){
			printf("%d",cnt);
			cnt++;
		}
		printf("\n");
	}
	int cnt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",cnt);
			cnt++;
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i) printf("~");
			else printf("%d",i);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=i;
		for(int j=1;j<=i;j++){
			printf("%d ",tmp);
			tmp+=n-j;
		}
		printf("\n");
	}
}
