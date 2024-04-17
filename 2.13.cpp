#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void chuanhoa(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}

int main(){
	char c[1000];
	gets(c);
	char a[10][50];
	char *token=strtok(c," ");
	int n=0;
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		chuanhoa(a[i]);
		printf("%s ",a[i]);
	}	
}
