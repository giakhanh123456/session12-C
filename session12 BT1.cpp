#include<stdio.h>

int sum(int a, int b);

int main(){
	int Tong = sum(1,2);
	printf("tong la: %d", Tong);
	return 0;
}

int sum(int a, int b){
	return a + b;	
};
