#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int dx(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<r){
		if(c[l]!=c[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main(){
	char c[1000];
	gets(c);
	if(dx(c)) printf("yes");
	else printf("no");
}
