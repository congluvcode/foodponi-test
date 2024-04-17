#include<stdio.h>
#include<math.h>

int p[100001];

void sang(){
	for(int i=1;i<=100000;i++) p[i]=i;
	for(int i=2;i<=100000;i++){
		if(p[i]==i){
			p[i]=i-1;
			for(int j=2*i;j<=100000;j+=i){
				p[j]-=p[j]/i;
			}
		}
		
	}
}

int main(){
	sang();
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d ",p[i]);
	}
}
