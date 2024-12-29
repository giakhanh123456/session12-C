#include<stdio.h>

int sohoanhao(int n);

int main(){
	int n1, n2;
	printf("nhap so thu nhat: ");
	scanf("%d", &n1);
	printf("nhap so thu hai: ");
	scanf("%d", &n2);
	if(sohoanhao(n1)){
		printf("%d la so hoan hao\n", n1);
	}else{
		printf("%d khong phai la so hoan hao\n", n1);
	}
	if(sohoanhao(n2)){
		printf("%d la so hoan hao\n", n2);
	}else{
		printf("%d khong phai la so hoan hao\n", n2);
	}
	return 0;
}

int sohoanhao(int n){
	int sum = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
			sum+= i;
		}
	}
	return n == sum;
}
