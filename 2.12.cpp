#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(*x<*y) return -1;
	else return 1;
}

int main(){
	char c[1000];
	gets(c);
	qsort(c,strlen(c),sizeof(char),cmp);
	printf("%s",c);
}
