#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int strcmp1(char a[],char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1!=n2) return 0;
	for(int i=0;i<n1;i++){
		if(tolower(a[i])!=tolower(b[i])) return 0;
	}
	return 1;
}

int main(){
	char c1[1000],c2[10];
	gets(c1);
	gets(c2);
	int n=0;
	char a[10][50];
	char *token= strtok(c1," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		if(strcmp1(a[i],c2)==0) printf("%s ",a[i]);
	}
}
