#include<stdio.h>
#include<math.h>

int ktnt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int sodep(int n){
	while(n){
		if(n%10==1 || n%10 == 9) return 1;
		n/=10;
	}
	return 0;
}
int dx(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		if(a[l]!=a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0,l=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) s++;
		else l++;
	}
	printf("%d%d",s,l);
	for(int i=0;i<n;i++){
		if(ktnt(a[i])) printf("%d ",a[i]);
	}
	int min=a[0],idx;
	for(int i=1;i<n;i++){
		if(a[i]<min) min=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==min){
			printf("%d",i);
			break;
		}
	}
	for(int i=0;i<n;i++){
		int dem=0;
		for(int x=1;x<n;x++){
			if(a[x]>a[i]) dem++;
		}
		if(dem>=2) printf("%d ",a[i]);
	}
	int max1=-1e9-1, max2=-1e9-1;
	for(int i=0;i<n;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}else if(a[i]>max2) max2=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<max2) printf("%d ",a[i]);
	}
	for(int i=0;i<n;i++){
		if(sodep(a[i])) printf("%d",a[i]);
		else printf("-1");
	}
	for(int i=0;i<n;i++){
		if(i==0 && a[i]*a[i+1]<0) printf("%d ",a[i]);
		else if(i==n-1 && a[i]*a[i-1]<0) printf("%d ",a[i]);
		else if(i>0 && i<n-1){
			if(a[i]*a[i-1]<0 || a[i]*a[i+1]<0) printf("%d ",a[i]);
		} 
	}
	if(dx(a,n)) printf("yes");
	else printf("no");
	return 0;
}
