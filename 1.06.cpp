#include<stdio.h>

int min(int a, int b){
	return a>b? b : a;
}
int max(int a,int b){
	return a>b ?  a:b;
}

int main(){
	int n,m; scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		printf("%d ",i);
		for(int j=1;j<m;j++){
			if(j<=m-i){
				printf("%d ",i+j);
			}
			else{
				int init=min(i-1,m-1);
				while(j<m){
					printf("%d ",init--);
					j++;
				}
			}
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=i;
		for(int j=1;j<=m;j++){
			if(j<=m-i){
				printf("%d ",tmp++);
			}
			else{
				printf("%d ",tmp--);
				}
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=i;
		for(int j=1;j<=m;j++){
			 if(j<=i-1){
				printf("%d ",tmp--);
			}else printf("%d ",tmp++);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int tmp=max(n,m);
		tmp=tmp-i+1;
		for(int j=1;j<=m;j++){
			if(j<=max(m,n)-i){
				printf("%d ",tmp);
				tmp--;
			}else printf("%d ",tmp++);
		}
		printf("\n");
		tmp--;
	}
}
