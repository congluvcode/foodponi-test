#include<stdio.h>

int main(){
	printf("=======================================\n");
	printf("===========1: Tim max,min==============\n");
	printf("===========2: Tinh thue ca nhan========\n");
	printf("===========3: tinh tuoi di nghia vu====\n");
	printf("=======================================\n");
	int n;
	scanf("%d",&n);
	int tien;
	float thue;
	int nam;
	int sinh;
	switch(n){
		case 1:
		case 2:
			printf("vui long nhap so tien");
			scanf("%d",&tien);
			if(tien<=7000000) thue=(float)tien*5/100;
			else if(tien<=30000000) thue=(float)tien*10/100;
			else thue=(float)tien*5/100;		
			printf("thue la %0.2f",thue);
			break;
		case 3:
			printf("vui long nhap nam hien tai\n");
			printf("vui long nhap nam sinh\n");
			scanf("%d",&nam);
			scanf("%d",&sinh);
			if(nam-sinh>=18) printf("da du tuoi di nghia vu");
			else printf("chua du tuoi di nghia vu");
			break;
	}
}
