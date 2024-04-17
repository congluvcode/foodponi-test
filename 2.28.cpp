#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}

int main(){
	char c[1000];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		int ok=1;
		for(int j=0;j<strlen(c);j++){
			if(c[i]==c[j]){
				ok=0;
				break;
			}
		}
		if(ok) printf("%c",c[i]);
	}
}
