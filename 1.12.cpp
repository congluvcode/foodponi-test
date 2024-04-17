#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=n;i>=1;i--){
		int tmp=i;
		for(int j=1;j<=i;j++){
			printf("%d ",tmp);
			tmp++;
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n-1;i++){
		int tmp=i;
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			if(k<=i-1){
				printf("%d ",tmp);
				tmp--;
			}else{
				printf("%d ",tmp);
				tmp++;
		}
		}
		printf("\n");
	}
	for(int )
}
