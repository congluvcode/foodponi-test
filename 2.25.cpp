#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int main(){
	char c1[1000],c2[1000];
	gets(c1);
	gets(c2);
	if(strstr(c2,c1)!=NULL){
		printf("yes");
	}else printf("no");	
}
