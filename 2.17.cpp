#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(strcmp(x,y)<0) return -1;
	else return 1;
}

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
	int b[n]={0};
	qsort(a,n,sizeof(a[0]),cmp);
	
	for(int i=0;i<n;i++){
		if(b[i]==0){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					cnt++;
					b[j]=1;
				}
			}
			printf("%s %d\n",a[i],cnt);
		}
	}
}
