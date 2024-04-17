#include<stdio.h>
#include<math.h>

int b[1000001]={0};
int c[1000001]={0};
int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int dem=0,res=0;
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(b[a[i]]==1){
			printf("%d ",a[i]);
		}
	}
}
