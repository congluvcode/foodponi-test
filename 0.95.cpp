#include<stdio.h>
#include<math.h>

#define ll long long

ll fi[1001];

void kt(){
	fi[0]=0;
	fi[1]=1;
	for(int i=2;i<=1000;i++){
		fi[i]=fi[i-1]+fi[i-2];
		fi[i]%=(int)(1e9+7);
	}
}

int main(){
	kt();
	int n; scanf("%d",&n);
	printf("%d",fi[n]);
}
