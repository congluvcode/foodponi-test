#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[100000];
		scanf("%s",&c);
		int res=0,tmp=0;
		for(int i=0;i<strlen(c);i++){
			if(isdigit(c[i])){
				tmp=tmp*10+c[i]-'0';
			}
			else{
				res+=tmp;
				tmp=0;
			}
		}
		if(isdigit(c[strlen(c)-1])) res+=tmp;
		printf("%d",res);
	}
}
