#include<stdio.h>
#include<math.h>

int dissertsphenic(int n){
	int res=0;
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt>1) return 0;
		if(cnt==1) res++;
	}
	if(n!=1) res++;
	return res==3;
}

int main(){
	int n; scanf("%d",&n);
	if(dissertsphenic(n)) printf("1");
	else printf("0");
}
