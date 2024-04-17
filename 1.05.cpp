#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int cnt=1;
		for(int j=1;j<=n;j++){
			if(j<=i){
				printf("%d ",cnt++);
			}
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		int tmp=i;
		for(int j=1;j<=n;j++){
			if(j<=i){
				printf("%d ",tmp);
				tmp+=n-j;
			}
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf("~");
		}
		int cnt=2;
		for(int k=1;k<=2*i-1;k++){
			if(k<i) printf("%d ",cnt), cnt+=2;
			else printf("%d ",cnt),cnt-=2;
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf("~");
		}
			int cnt=1;
			for(int k=1;k<=2*i-1;k++){
				if(k<i) printf("%d ",cnt), cnt+=2;
				else printf("%d ",cnt), cnt-=2;
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int cnt=2;
		for(int j=1;j<=2*i-1;j++){
			if(j<i) printf("%d ",cnt), cnt+=2;
			else printf("%d ",cnt), cnt-=2;
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		int cnt;
		if(i%2==1) cnt=i*(i+1)/2;
		else cnt=i*(i+1)/2-i+1;
		for(int j=1;j<=i;j++){
			if(i%2==1) printf("%d ",cnt--);
			else printf("%d ",cnt++);
		}
		printf("\n");
	}
	int cnt=1,x=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",cnt);
			cnt+=x;
			x++;
		}
		printf("\n");
	}
}
