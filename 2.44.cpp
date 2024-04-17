#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int sum(char a[]){
	int sum=0;
	for(int i=0;i<strlen(a);i++){
		sum+=a[i]-'0';
	}
	return sum;
}

int main(){
	char a[10000];
	gets(a);
	printf("%d",sum(a));
}
