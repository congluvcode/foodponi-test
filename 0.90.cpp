#include<stdio.h>
#include<math.h>
#include<string.h>

void kt(char c[]){
	int ok=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]=='1') ok=1;
		else if(!(c[i]=='0' || c[i]=='8' || c[i]=='9')){
			ok=0;
			break;
		}
	}
	if(!ok){
		printf("invalid");
		return;
	}
	else{
		for(int i=0;i<=strlen(c);i++){
			if(c[i]=='1'){
				ok=0;
				printf("%c",c[i]);
			}
			else if(ok==0){
				 printf("0");
			}
		}
	} 
}

int main(){
	char c[20];
	scanf("%c",&c);
	kt(c);
}
