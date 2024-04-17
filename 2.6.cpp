#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int pangram(char c[]){
	int cnt[26];
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']=1;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]==0) return 0;
	}
	return 1;
}

int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	if(pangram(c)) printf("yes");
	else printf("no");
}
