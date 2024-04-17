#include<stdio.h>
#include<math.h>

#define ll long long

void kt(ll n){
	int cnt2=0, cnt3=0,cnt5=0,cnt7=0;
	while(n){
		int r=n%10;
		if(r==2) cnt2++;
		if(r==3) cnt3++;
		if(r==5) cnt5++;
		if(r==7) cnt7++;
		n/=10;
	}
	if(cnt2!=0) printf("2 %d\n",cnt2);
	if(cnt3!=0) printf("3 %d\n",cnt3);
	if(cnt5!=0) printf("5 %d\n",cnt5);
	if(cnt7!=0) printf("7 %d\n",cnt7);
}

int main(){
	ll n; scanf("%lld",&n);
	kt(n);
}
