#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
\
int main(){
	char a[1000];
	gets(a);
	int res[26]={0};
	for(int i=0;i<strlen(a);i++){
		res[a[i]-'A']++;
	}
	for(int i=0;i<26;i++){
		if(res[i]==1){
			printf("%c ",i+'A');
		}
	}
}
