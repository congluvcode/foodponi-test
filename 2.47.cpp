#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int dk2(char c[]){
	int sum=0;
	int n=strlen(c);
	for(int i=0;i<n;i++){
		sum+=c[i]-'0';
	}
	if(sum%3!=0) return 0;
	if((c[n-1]-'0')%2!=0) return 0;
	return 1;
}

int main(){
	char c[10000];
	gets(c);
	if(dk2(c)) printf("yes");
	else printf("no");
}
