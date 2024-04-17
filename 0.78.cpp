#include<stdio.h>
#include<math.h>

#define ll long long

int tn(ll n){
	 ll m=0;
	 while(n){
	 	m=m*10+n%10;
	 	n/=10;
	}
	return m;
}

void dem(ll n){
	ll m=tn(n);
	int c2=0,c3=0,c5=0,c7=0;
	while(n){
		int r=n%10;
		if(r==2) c2++;
		if(r==3) c3++;
		if(r==5) c5++;
		if(r==7) c7++;
		n/=10;
	}
	while(m){
		int r=m%10;
		if(r==2 && c2!=0){
			printf("2 %d",c2);
			c2=0;
		}
		else if(r==3 && c3!=0){
			printf("3 %d",c3);
			c3=0;
		}
		else if(r==5 && c5!=0){
			printf("5 %d",c5);
			c5=0;
		}
		else if(r==7 && c7!=0){
			printf("7 %d",c7);
			c7=0;
		}
		m/=10;
	}
}

int main(){
	ll n; scanf("%lld",&n);
	dem(n);
}


