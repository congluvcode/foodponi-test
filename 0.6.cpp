#include<stdio.h>
#include<math.h>
int max(int a,int b){
	return a>=b ?  a : b;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=1;
	int res=0,idx;
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]) dem++;
		else dem=1;
		if(dem>res){
			res=dem;
			idx=i-res+1;
		}
	}
	printf("%d\n",res);
	for(int i=0;i<res;i++){
		printf("%d ",a[i+idx]);
	}
	return 0;
}
