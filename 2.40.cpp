#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int tmp=1,res=0;
	for(int i=0;i<strlen(c)-1;i++){
		tmp=1;
		while(c[i]!=c[i+1] && i<strlen(c)-1){
			tmp++;
			i++;
		}
		if(tmp>res) res=tmp;
	}
	printf("%d",res);
}
