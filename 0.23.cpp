#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[10]={1000,500,200,100,50,20,10,5,2,1};
	int n;scanf("%d",&n);
	int sum=0;
	for(int i=0;i<10;i++){
		sum+=(n/a[i]);
		n%=a[i];
	}
	printf("%d",sum);
}
