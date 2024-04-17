#include<stdio.h>
#include<math.h>

int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
	int max=-1e9-1, hang,cot;
	for(int i=0;i<n;i++){
		int res=0;
		for(int j=0;j<m;j++){
			res+=a[i][j];
		}
		if(res>max){
			max=res;
			hang=i;
		}
	}
	max=-1e9-1;
	for(int i=0;i<n;i++){
		int res=0;
		if(i!=hang){
			for(int j=0;j<m;j++){
				res=a[j][i];
			}
			if(res>max){
				max=res;
				cot=i;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i!=hang){
			for(int j=0;j<m;j++){
				if(i!=cot) printf("%d",a[i][j]);
			}
		}
		printf("\n");
	}
}
