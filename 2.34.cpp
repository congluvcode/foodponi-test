#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int kt(char c[]){
	int cnt;
	for(int i=0;i<strlen(c)-1;i++){
		if(c[i]==c[i+1]) cnt++;
	}
	return cnt;
}

int main(){
	char c[1000];
	gets(c);
	printf("%d",kt(c));
}
