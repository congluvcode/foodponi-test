#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int tn(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		if(a[l]!=a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int kt(char c[]){
	int n=strlen(c);
	int x[n];
	for(int i=0;i<n;i++) x[i]=c[i]-'0';
	int ok=0;
	if(tn(x,n)) ok=1;
	for(int i=0;i<n;i++){
		if(x[i]%2!=0) ok=0;
	}
	if(ok) return 1;
	else return 0;	
}

int main(){
	char c[10000];
	gets(c);
	if(kt(c)) printf("yes");
	else printf("no");
}
