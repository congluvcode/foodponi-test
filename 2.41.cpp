#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int max(int a, int b){
	return a>b ? a : b;
}

int main(){
	char c[1000];
	gets(c);
	int res=1,cnt=1;
	for(int i=0;i<strlen(c)-1;i++){
		if(c[i]==c[i+1]){
			cnt++;
		}else{
			res=max(res,cnt);
			cnt=1;
		}
	}
	res=max(res,cnt);
	printf("%d",res);
}
