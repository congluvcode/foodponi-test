#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int idx=-1,res=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]=='1'){
			if(idx==-1) idx=i;
			else{
				res+=i-idx-1;
				idx=i;
			}
		}
	}
	printf("%d",res);
}
