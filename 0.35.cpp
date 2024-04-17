#include<stdio.h>
#include<math.h>

long long p[100];

void init(){
	p[0]=0;
	p[1]=1;
	for(int i=2;i<81;i++) p[i]=p[i-1]+p[i-2];
}

int main(){
	init();
	for(int i=0;i<81;i++) printf("%lld ",p[i]);
	int n; scanf("%d",&n);
	long long a[n][n];
	int h1=0,h2=n-1,c1=0,c2=n-1,cnt=0;
	while(h1<=h2 && c1<=c2){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=p[cnt];
			++cnt;
		}
		++h1;
		for(int i=h1;i<=h2;i++){
			a[i][c2]=p[cnt];
			++cnt;
		}
		--c2;
		if(c1<=c2){
			for(int i=c2;i>=c1;i--){
				a[h2][i]=p[cnt];
				++cnt;
			}
			--h2;
		}
		if(h1<=h2){
			for(int i=h2;i>=h1;i--){
				a[i][c1]=p[cnt];
				++cnt;
			}
			++c1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) printf("%lld ",a[i][j]);
		printf("\n");
	}
}
