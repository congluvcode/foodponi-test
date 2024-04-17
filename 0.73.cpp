#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int lmp(int a, int b){
	return a/gcd(a,b)*b;
}

int main(){
	int a, b; scanf("%d%d",&a,&b);
	printf("%d %d",gcd(a,b),lmp(a,b));
}
