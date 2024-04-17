#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int cnt=0;
	char a[256]={0};
	for(int i=0;i<strlen(c);i++){
		a[c[i]]+=1; 
	}
	for(int i=0;i<256;i++){
		if(a[i]%2==1) cnt++;
	}
	if(strlen(c)%2==1 && cnt<=1) printf("yes");
	else if(strlen(c)%2==0 && cnt==0) printf("yes");
	else printf("no");
}
