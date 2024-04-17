#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int res[10001];

void check(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(isdigit(c[i])){
			int tmp=0;
			while(isdigit(c[i])){
				tmp=tmp*10+c[i]-'0';
				i++;
			}
			i+=3;
			int mu=0;
			while(isdigit(c[i])){
				mu=mu*10+c[i]-'0';
				i++;
			}
			res[mu]+=tmp;
		}
	}
}

int main(){
	char c1[1000],c2[1000];
	gets(c1);
	gets(c2);
	memset(res,0,sizeof(res));
	check(c1);
	check(c2);
	int cnt=0;
	for(int i=10000;i>=0;i--){
		if(res[i]) cnt++;
	}
	for(int i=10000;i>=0;i--){
		if(res[i]){
			printf("%d*x^%d",res[i],i);
			cnt--;
			if(cnt){
				printf(" + ");
			}
		}
		
	}
}
