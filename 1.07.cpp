#include<stdio.h>

int min1(int a, int b){
	return a>b? b : a;
}
int max2(int a,int b){
	return a>b? a : b;
}

int main(){
	int n,m; scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int tmp=min1(i,m);
		for(int j=1;j<=m;j++){
			if(j<=m-i){
				printf("%c",63+tmp++);
			}else printf("%c",63+tmp);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int unit=min1(i,m);
		for(int j=1;j<=m;j++){
			if(j<=m-i+1){
				printf("%d",unit+j-1);
			}else{
				if(m<i) printf("%d",unit--);
				else printf("%d",--unit);
				}
			}
			printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=max2(m,n);
		for(int j=1;j<=m;j++){
			if(j<i) printf("%d",tmp--);
			else printf("%d",tmp);
		}
		printf("\n");
	}
}
