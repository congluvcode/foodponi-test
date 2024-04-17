#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int res=0;
	for(int i=0;i<strlen(c);i++){
		if((c[i]-'0')%2==0){
			res+=i+1;
		}
	}
	printf("%d",res);
}
