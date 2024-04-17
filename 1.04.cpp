#include<stdio.h>

int min(int a, int b){
	return a > b? b : a;
}
int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<=2*n-1;j++){
			int min_dis=min(min(i-1,2*n-i-1),min(j-1,2*n-j-1));
			printf("%d",n-min_dis);
		}
		printf("\n");
	}printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int min2=min(i-1,j-1);
			printf("%d ",n-min2);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int unit=n;
		for(int j=1;j<=n;j++){
			if(j<i){
				printf("%d",unit);
				unit--;
			}
			else printf("%d",unit);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=i;
		for(int j=1;j<=n;j++){
			if(j<i){
				printf("%d ",tmp);
				tmp--;
			}else{
				printf("%d ",tmp);
				tmp++;
			}
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=i;
		for(int j=1;j<=n;j++){
			if(j<n-i+1){
				printf("%d ",tmp++);
			}else printf("%d ",tmp);
		}
		printf("\n");
	}
}
