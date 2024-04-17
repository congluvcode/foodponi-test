#include<stdio.h>
#include<math.h>

void check(int n){
	int l=0,c=0;
	while(n){
		int r=n%10;
		if(r%2==0) c++;
		else l++;
		n/=10;
	}
	if(l!=0 || c!=0) printf("%d %d",l,c);
	else printf("-1");
}

int main(){
	int n; scanf("%d",&n);
	check(n);
}
