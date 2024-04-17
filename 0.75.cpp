#include<stdio.h>
#include<math.h>

#define ll long long
int uoc(int n){
	int cnt2=0,cnt3=0,cnt5=0,cnt7=0;
	for(int i=2;i<=n;i++){
		int tmp=i;
		while(tmp){
			while(tmp%2==0){
			cnt2++;
			tmp/=2;
		}
		while(tmp%3==0){
			cnt3++;
			tmp/=3;
		}
		while(tmp%5==0){
			cnt5++;
			tmp/=5;
		}
		while(tmp%7==0){
			cnt7++;
			tmp/=7;
		}
		}
	}
	long long kq=(ll)(cnt2+1)*(cnt3+1)*(cnt5+1)*(cnt7+1);
	return kq;
}

int main(){
	int n; scanf("%d",&n);
	printf("%lld",uoc(n));
}
