#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int kt(char c[]){
	int n=strlen(c);
	if(n==1) return 0;
	else{
		int tmp=(c[n-2]-'0')*10+(c[n-1]-'0');
		if(tmp%25==0) return 1;
		else return 0;
	}
}

int main(){
	char c[10000];
	gets(c);
	if(kt(c)) printf("yes");
	else printf("no");
}
