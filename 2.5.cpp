#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[1000];
	gets(a);
	int cnt[26];
	for(int i=0;i<strlen(a);i++){
		cnt[a[i]-'a']++;
	}
	int ok=1;
	for(int i=0;i<26;i++){
		if(cnt[i]==0) ok=0;
	}
	if(ok==1) printf("yes");
	else printf("no");
}
