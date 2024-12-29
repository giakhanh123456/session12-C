#include<stdio.h>

int giaithua(int n);

int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	int ketqua = giaithua(n);
	if(ketqua != -1){
		printf("giai thua cua so %d la %d\n",n,ketqua);
	}
	return 0;
}

int giaithua(int n){
	if(n < 0){
		printf("khong hop le voi so am\n");
		return 0;
	}else if(n == 0 || n == 1){
		return 1;
	}else{
		int ketqua = 1;
		for(int i = 2; i <= n; i++){
			ketqua *= i;
		}
		return ketqua;
	}
}
	
