#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int kt(char c[]){
	if(strlen(c)==1){
		if((c[0]-'0')%4==0) return 1;
		else return 0;
	}
	int n=strlen(c);
	int tmp=0;
	tmp=c[n-2]-'0';
	tmp=tmp*10+c[n-1]-'0';
	if(tmp%4==0) return 1;
	else return 0;
}

int main(){
	char c[10000];
	gets(c);
	if(kt(c)) printf("yes");
	else printf("no");
}
