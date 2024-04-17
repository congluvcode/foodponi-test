#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char c[10000];
	gets(c);
	int cnt[26];
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']++;
	}
	for(int i=0;i<strlen(c);i++){
		if(cnt[c[i]-'a']!=0){
			printf("%c %d\n",c[i],cnt[c[i]-'a']);
			cnt[c[i]-'a']=0;
		}
	}
}
