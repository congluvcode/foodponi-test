#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int dk1(int c[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=c[i];
	}
	if(sum%5==0 && sum%2==0) return 1;
	else return 0;
}

int dk2(int c[],int n){
	for(int i=0;i<n;i++){
		if(c[i]!=2 && c[i]!=3 && c[i]!=5 && c[i]!=7) return 0;
	}
	return 1;
}

int main(){
	char c[10000];
	gets(c);
	int n=strlen(c);
	int z[n];
	for(int i=0;i<n;i++) z[i]=c[i]-'0';
	if(dk1(z,n) && dk2(z,n)) printf("yes");
	else printf("no");
}
