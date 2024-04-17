#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	printf("\tBai kiem tra so 1\n");
	printf("----------------------------------------");
	printf("1.chuc nang 'tinh luong cong nhan'");
	printf("2.chuc nang 'tinh tring binh so chan chia het cho 7'");
	printf("3.thoat chuong trinh");
	switch(n){
		case 1:
			printf("ban da chon chuc nang tinh luong cong nhan\n");
			printf("nhap so ngay lam\n");
			int n;
			scanf("%d",&n);
			int luong;
			if(n>=26) luong=(300*n)+500;
			else if(n>=24) luong=(300*n)+200; 
			else if(n>=22) luong=(300*n); 
			else  luong=(300*n)-300;
			printf("luong cong nhan la %d\n",luong); 
			break;
		case 2:
			printf("ban da chon chuc nang tinh trung binh cac so chan chia het cho 7\n");
			printf("vui long nhap so n\n");
			int k;
			int i=14,res=0;
			scanf("%d",&k);
			float kq;
			int cnt;
			while(i<=k){
				if(i%2==0 && i%7==0){
					res+=i;
					cnt++;
				}
				i+=7;
			}
			kq=(float)res/cnt;
			printf("trung binh so chan chia het cho 7 nho hon k la %f",kq);
			break;
		case 3:
			printf("thoat chuong trinh");
			break;
	}
	return 0;
}
