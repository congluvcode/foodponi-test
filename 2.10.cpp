#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(strcmp(x,y)<0) return -1;
	return 1;
}

void sx(char c[][50],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(strcmp(c[j],c[min])<0) min=j;
			char tmp[1000];
			strcpy(tmp,c[min]);
			strcpy(c[min],c[i]);
			strcpy(c[i],tmp);
		}
	}
}

int main(){
	char c[1000];
	gets(c);
	int n=0;
	char a[20][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		token=strtok(NULL," ");
		n++;
	}	
	qsort(a,n,sizeof(a[n]),cmp);
	for(int i=0;i<n;i++){
		printf("%s ",a[i]);
	}
}
