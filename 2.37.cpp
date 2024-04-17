#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[1000];
	gets(c);
	int ok=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]=='8' && n-i>=11){
			ok=1;
		}
		if(n-i<11) break;
	}
	if(ok==0) printf("no");
	else printf("yes");
	
}
