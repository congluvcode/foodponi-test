#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[1000];
		scanf("%s",c);
		int max=0,tmp;
		for(int i=0;i<strlen(c);i++){
			tmp=0;
			while(i<strlen(c) && isdigit(c[i])){
				tmp=tmp*10+c[i]-'0';
				i++;
			}
			if(tmp>max){
				max=tmp;
			}
		}
		printf("%d",max);
	}
}
