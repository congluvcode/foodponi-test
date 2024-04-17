#include<stdio.h>

int selectionsort(int a[],int n){
	for(int i=0;i<n;i++){
		int m=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[m]) m=j;
		}
		int tmp=a[m];
		a[m]=a[i];
		a[i]=tmp;
	}
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int a[n],b[n], cnt[200],c=0,l=n-1;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		selectionsort(a,n);
		selectionsort(b,n);
		for(int i=0;i<n+n;i++){
			if(i%2==0){
				cnt[i]=a[c++];
			}else{
				cnt[i]=b[l--];
			}
		}
		for(int i=0;i<n+n;i++) printf("%d",cnt[i]);
	}
}
