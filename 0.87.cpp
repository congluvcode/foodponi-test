#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long

int powmod(int x, int y, int z){
	ll res=1;
	while(y){
		if(y%2==1){
			res*=x;
			res%=z;
		}
		x*=x;
		x%=z;
		y/=2;
	}
	return res;
}

int main(){
	int x, y, z; scanf("%d%d%d",&x,&y,&z);
	printf("%d",powmod(x,y,z));
}
