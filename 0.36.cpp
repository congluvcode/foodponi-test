#include<stdio.h>

int a[10000];
void intic(){
	for(int i=0;i<10000;i++) a[i]=1;
	a[0]=a[1]=0;
	for(int i=0;i<10000;i++){
		if(a[i]){
			for(int j=i*i;j<10000;j+=i) a[j]=0;
		}
	}
}

int main(){
	intic();
	int n; scanf("%d",&n);
	if(a[n]) printf("yes");
	else printf("no");
}
