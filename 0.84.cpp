#include<stdio.h>
#include<math.h>

#define ll long long

ll p[1000001];
ll res[1000001];

void sang1(){
	for(int i=1;i<=1000000;i++) p[i]=i;
	for(int i=2;i<=1000000;i++){
		if(p[i]==i){
			p[i]=i-1;
			for(int j=i*2;j<=1000000;j+=i){
				p[j]*=1-1.0*1/i;
			}
		}
	}
}

void sang2(){
	for(int i=1;i<=1000000;i++){
		for(int j=i;j<=1000000;j+=i){
			res[j]+=i*p[i];
		}
	}
}

int main(){
	sang1();
	sang2();
	int n; scanf("%d",&n);
	ll kq=(1ll*res[n]+1)*n/2;
	printf("%lld",kq);
}



