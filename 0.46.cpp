#include<stdio.h>
#include<math.h>

void pt(int n){
	int cnt,x;
	for(int i=2;i<=sqrt(n);i++){
		cnt=0,x=i;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt>0){
			printf("%d %d",x,cnt);
			printf("\n");
		}
	}
	if(n!=1) printf("%d 1",n);
}

int main(){
	int n; scanf("%d",&n);
	pt(n);
}
