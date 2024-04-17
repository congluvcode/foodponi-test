#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int kt=1;
	for(int i=1;i<n;i++){
		if(a[i]<=a[i-1]){
			kt=0;
			break;
		}
	}
	if(kt) printf("yes");
	else printf("no");
	int max,min;
	for(int i=0;i<n;i++){
		int g=0,x=0;
		if(i==0){
			g=a[i+1]-a[i];
			x=a[n-1]-a[i];
		}
		else if(i==n-1){
			g=a[i]-a[i-1];
			x=a[i]-a[0];
		}else{
			g=a[i+1]-a[i];
			if(a[i]-a[i-1]<g) g=a[i]-a[i-1];
			x=a[i]-a[0];
			if(a[n-1]-a[i]>x) x=a[n-1]-a[i];
		}
		printf("%d%d ",g,x);
	}
	return 0;
}
