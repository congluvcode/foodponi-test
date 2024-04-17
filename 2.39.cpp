#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int value[7]={1,5,10,50,100,500,1000};

char s[]="IVXLCDM";

int findpost(char c){
	for(int i=0;i<7;i++){
		if(s[i]==c){
			return i;
		}
	}
}

int kt(char c[]){
	int n=strlen(c);
	int res=value[findpost(c[n-1])];
	for(int i=n-1;i>0;i--){
		int post1=value[findpost(c[i])];
		int post2=value[findpost(c[i-1])];
		if(post1<=post2) res+=post2;
		else res-=post2;
	}
	return res;
}

int main(){
	char c[1000];
	gets(c);
	printf("%d",kt(c));
}
