#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int kt(char c[],char res[]){
	char k[5]={'h','e','l','l','o'};
	int cnt=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]==res[cnt]){
			cnt++;
		}
	}
	if(cnt==5)return 1;
	else return 0;
}

int main(){
	char res[5]={'h','e','l','l','o'};
	char c[1000];
	gets(c);
	if(kt(c,res)) printf("yes");
	else printf("no");
	return 0;
}
