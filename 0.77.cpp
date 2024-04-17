#include<stdio.h>
#include<math.h>

#define ll long long
ll p[1000001];
ll res[1000001];

void sang(){
	for(int i=1;i<=1000000;i++) p[i]=i;
	for(int i=2;i<=1000000;i++){
		if(p[i]==i){
			p[i]=i-1;
			for(int j=2*i;j<=1000000;j+=i){
				p[j]=p[j]-p[j]/i;
			}
		}
	}
}

void sang2(){
	for(int i=1;i<=1000000;i++){
		for(int j=i;j<=1000000;j+=i){
			res[j]+=1ll*i*p[i];
		}
	}
}

int main(){
	sang();
	sang2();
	int n; scanf("%d",&n);
	printf("%lld",(res[n]+1)*n/2);
}
