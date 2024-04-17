#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tmp;
		if(i%2==0) tmp=i*(i+1)/2;
		else tmp=i*(i+1)/2-i+1;
		for(int j=1;j<=n;j++){
			if(j<=i){
				if(i%2==0) printf("%c ",64+tmp--);
				else printf("%c ",64+tmp++);
			}
		}
		printf("\n");
	}
}
