#include<stdio.h>
#include<math.h>

#define ll long long

int gcd(int x,int y){
	if(y==0) return x;
	return gcd(y,x%y);
}

int lmp(int x,int y){
	return x/gcd(x,y)*y;
}

int search(int x,int y,int z, int n){
	ll tmp=lmp(lmp(x,y),z);
	ll m=(ll)pow(10,n-1);
	ll res=(m+tmp-1)/tmp*tmp;
	if(res<(ll)pow(10,n)) return res;
	else  return -1;
}


int main(){
	int x,y,z; scanf("%d%d%d",&x,&y,&z);
	int n; scanf("%d",&n);
	printf("%d",search(x,y,z,n));
}
