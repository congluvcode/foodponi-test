#include<stdio.h>
#include<math.h>

#define ll long long
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int lmp(int a, int b){
	return a*b/gcd(a,b);
}

ll min(int x, int y, int z,int n){
	ll res;
	int k =lmp(lmp(x,y),z);
	res=(1ll*pow(10,n-1)+k-1)/k*k;
	if(res<1ll*pow(10,n)) return res;
	else return -1;
}

int main(){
	int x,y,z,n; scanf("%d%d%d%d",&x,&y,&z,&n);
	printf("%lld",min(x,y,z,n));
}
