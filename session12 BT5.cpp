#include<stdio.h>

int kiemtraSNT(int n);

int main(){
	int n1, n2;
	printf("nhap so thu nhat: ");
	scanf("%d", &n1);
	printf("nhap so thu hai: ");
	scanf("%d", &n2);
	if(kiemtraSNT(n1)){
		printf("%d la so nguyen to\n", n1);
	}else{
		printf("%d khong phai la so nguyen to\n", n1);
	}
	if(kiemtraSNT(n2)){
		printf("%d la so nguyen to\n", n2);
	}else{
		printf("%d khong phai la so nguyen to\n", n2);
	}
	return 0;
}

int kiemtraSNT(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
