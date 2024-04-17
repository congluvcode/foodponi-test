#include<stdio.h>
#include<string.h>

void kt(char c[]){
	for(int i=0;i<strlen(c)-2;i++){
		if(c[i]=='0' && c[i+1]=='8' && c[i+2]=='4') c[i]=c[i+1]=c[i+2]='x';
	}
	for(int i=0;i<strlen(c);i++){
		if(c[i]!='x') printf("%c",c[i]);
	}
}

int main(){
	char c[20]; scanf("%s",&c);
	kt(c);
}
