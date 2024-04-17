#include<stdio.h>
#include<math.h>

long long fibon[92];

void sang(){
	fibon[0]=0, fibon[1]=1;
	for(int i=2;i<92;i++){
		fibon[i]=fibon[i-1]+fibon[i-2];
	}
}

int check(int n){
	if(n==1 || n==2) return 1;
	int fi1=2, fi2=1;
	for(int i=3;i<=92;i++){
		int fin=fi1+fi2;
		if(fin==n) return 1;
		fi2=fi1;
		fi1=fin;
	}
	return 0;
}

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int dissert(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	if(check(sum)) return 1;
	return 0;
}


int main(){
	sang();
	int l,r; scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		if(nt(i) && dissert(i)) printf("%d ",i);
	}
}
