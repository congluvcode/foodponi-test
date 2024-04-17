#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(){
	char c[1000];
	gets(c);
	int l=0, r=strlen(c)-1;
	int cnt=0;
	while(l<r){
		if(c[l]!=c[r]){
			cnt++;
		}
		l++;
		r--;
	}
	if(cnt<=1) printf("yes");
	else printf("no");
}
