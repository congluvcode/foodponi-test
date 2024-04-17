#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[10][50];
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	printf("%s",a[n-1]);
	printf("%c%c@gmail.com",a[0][0],a[1][0]);
}
