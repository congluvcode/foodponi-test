#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tmp=1;
		for(int j=1;j<=2*i-1;j++){
			if(j<=i-1){
				printf("%d ",tmp);
				tmp+=2;
			}else{
				printf("%d ",tmp);
				tmp-=2;
			}
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=2*i-1;
		for(int j=1;j<=n-i+1;j++){
			printf("%d ",tmp);
			tmp+=2;
		}
		printf("\n");
	}
}
