#include<stdio.h>
#include<math.h>

int b[1000]={0};
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n; scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(b[a[i][i]]==0 && nt(a[i][i])){
			dem++;
			b[a[i][i]]=1;
		}  
		if(b[a[i][n-i-1]]==0 && nt(a[i][n-i-1])){
			dem++;
			b[a[i][n-i-1]]=1;
		}  
	}
	printf("%d",dem);
}
