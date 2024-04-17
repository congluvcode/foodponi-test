#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	char*x=(char*)a;
	char*y=(char*)b;
	if(strcmp(x,y)<0) return -1;
	else return 1;
}

int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	int n=0;
	char a[10][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	int max=0,idx;
	for(int i=0;i<n;i++){
		int cnt=1;
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i],a[j])==0) cnt++;
		}
		if(cnt>max){
			max=cnt;
			idx=i;
		}
	}
	printf("%s %d",a[idx],max);
}
