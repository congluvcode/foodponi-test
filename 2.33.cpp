#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int lis(char c[]){
	int lis[strlen(c)];
	for(int i=0;i<strlen(c);i++){
		lis[i]=1;
		for(int j=0;j<i;j++){
			if(c[i]>c[j]){
				lis[i]=lis[j]+1;
			}
		}
	}
	int max;
	for(int i=0;i<strlen(c);i++){
		if(lis[i]>max) max=lis[i];
	}
	return max;
}

int main(){
	char c[1000];
	gets(c);
	printf("%d",26-lis(c));
}
