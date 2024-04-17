#include<stdio.h>

int main(){
	printf("=======================================\n");
	printf("===========1: Tim max,min==============\n");
	printf("===========2: Tinh thue ca nhan========\n");
	printf("===========3: tinh tuoi di nghia vu====\n");
	printf("=======================================\n");
	int n;
	scanf("%d",&n);
	int a,b,c,d;
	int min,max;
	int tien;
	float thue;
	int nam;
	int sinh;
	switch(n){
		case 1:
			printf("nhap 4 so ");
			scanf("%d%d%d%d",&a,&b,&c,&d);
			max=(a>b) ? a : b;
			max=(max>c) ? max : c;
			max=(max>d) ? max :d;
			min=(a>b) ? b: a;
			min=(min<c) ? min : c;
			min=(min<d) ? min : d;
			printf("so lon %d\n",max);
			printf("so be %d\n",min); 
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
