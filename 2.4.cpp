#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[1000],b[1000];
	gets(a);
	gets(b);
	int cnt[256]={0};
	for(int i=0;i<strlen(a);i++){
		cnt[a[i]]=1;
	}
	for(int i=0;i<strlen(b);i++){
		cnt[b[i]]=1;
	}
	for(int i=0;i<256;i++){
		if(cnt[i]){
			printf("%c",i);
		}
	}
}
