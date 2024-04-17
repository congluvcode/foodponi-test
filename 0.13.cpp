#include<stdio.h>

int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	int i=0,j=0,cnt=0,c[n+m];
	while(i<n && j<m){
		if(a[i]<=b[j]){
			c[cnt]=a[i];
			cnt++;
			i++;
		}else{
			c[cnt]=b[j];
			cnt++;
			j++;
		}
	}
	while(i<n){
	 	c[cnt++]=a[i++];
	}
	while(j<m){
	 	c[cnt++]=b[j++];
	}
	for(int i=0;i<cnt;i++){
		printf("%d",c[i]);
	} 
}
