#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[1000],b[100];
	gets(c);
	gets(b);
	int n=0;
	char a[10][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		if(strcmp(token,b)!=0){
			strcpy(a[n],token);
			n++;
		}
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		 printf("%s",a[i]);
		 if(i!=n-1) printf(" ");
	}
}
