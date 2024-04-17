#include<stdio.h>

int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	int i=0,j=0,cnt=0,k=0,h[n+ m],g[n+m];
	while(i<n&&j<m){
		if(a[i]>b[j]){
			h[cnt]=b[j];
			cnt++;
			j++;
		}else if(a[i]<b[j]){
			h[cnt]=a[i];
			cnt++;
			i++;
		}else{
			g[k]=a[i];
			h[cnt]=a[i];
			cnt++, k++, i++, j++;
		}
	}
	while(i<n){
		h[cnt++]=a[i++];
	}
	while(j<m){
		h[cnt++]=b[j++];
	}
	for(int i=0;i<cnt;i++) printf("%d ",h[i]);
	printf("\n");
	for(int i=0;i<k;i++) printf("%d ",g[i]);
}
