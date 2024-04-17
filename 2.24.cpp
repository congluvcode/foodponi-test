#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

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
	int ok=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(strcmp(a[i],a[j])==0){
				ok=1;
				printf("%s",a[i]);
				break;
			}
		}
		if(ok) break;
	}
	if(ok==0) printf("-1");
}
