#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(strlen(x)!=strlen(y)){
		if(strlen(x)<strlen(y)) return -1;
	}else{
		if(strcmp(x,y)<0) return -1;
		else return 1;
	}
}

int main(){
	char c[1000];
	gets(c);
	int n=0;
	char a[10][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++){
		printf("%s ",a[i]);
	}
}
