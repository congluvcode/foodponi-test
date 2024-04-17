#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int reserver(int c[],int n){
	int tmp;
	int l=0,r=n-1;
	while(l<r){
		tmp=c[l];
		c[l]=c[r];
		c[r]=tmp;
		l++;
		r--;
	}
}

//mac dinh la a lon hon b
void sub(char a[],char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	int x[n1],y[n1],z[n1],n=0;
	for(int i=0;i<strlen(a);i++) x[i]=a[i]-'0';
	for(int i=0;i<strlen(b);i++) y[i]=b[i]-'0';
	reserver(x,n1);
	reserver(y,n2);
	for(int i=n2;i<n1;i++) y[i]=0;
	int nho=0;
	for(int i=0;i<n1;i++){
		int tmp=x[i]-y[i]-nho;
		if(tmp<0){
			z[n++]=tmp+10;
			nho=1;
		}else{
			z[n++]=tmp;
			nho=0;
		}
	}
	reserver(z,n);
	int ok=0;
	for(int i=0;i<n;i++){
		if(z[i]!=0){
			ok=1;
		}
		if(z[i]==0 && ok==0) i++;
		else if(ok==1) printf("%d",z[i]);
	}
	if(ok==0) printf("0");
}

int main(){
	char a[10000];
	char b[10000];
	gets(a);
	gets(b);
	sub(a,b);
}
