#include<stdio.h>
#include<math.h>
#include<graphics.h>

#define ll long long

long long max(ll a,ll b){
	return a<b? b :a;
}

int main(){
	int n; scanf("%d",&n);
	int res[n];
	for(int i=0;i<n;i++) scanf("%lld",res[i]);
	int max1=-1e9-1,max2=-1e9-1,min1=1e9+1,min2=1e9+1;
	for(int i=0;i<n;i++){
		if(res[i]<min1){
			min2=min1;
			min1=res[i];
		}else if(res[i]<min2){
			min2=res[i];
		}
		if(res[i]>max1){
			max2=max1;
			max1=res[i];
		}else if(res[i]>max2){
			max2=res[i];
		}
	}
	ll kq=max(1ll*max1*max2,1ll*min1*min2);
	printf("%lld",kq); 
}
