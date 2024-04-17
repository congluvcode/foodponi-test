#include<stdio.h>
#include<math.h>

int max(int a, int b){
	return a>b ? a : b;
}

int main(){
	int t; scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int res=0, cnt=1, s[n],dem=1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]) dem++;
			else dem=1;
			if(dem>res){
				res=dem;
				s[0]=i-res+1;
				cnt=1;
			}
			else if(dem==res){
				s[cnt]=i-res+1;
				++cnt;
			}	 
		}
		printf("Test %d : ",i);
		printf("%d\n",res);
		for(int i=0;i<cnt;i++){
			for(int j=0;j<res;j++){
				printf("%d ",a[s[i]+j]);
			}
			printf("\n");
		}
	}
}
