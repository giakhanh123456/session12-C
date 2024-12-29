#include<stdio.h>
#define MAX 100
int arr[MAX];

int maxarray(int arr[], int n);

int main(){
	int n =0;
	printf("nhap so phan tu muon nhap ");
	scanf("%d", &n);
	int arr[n];
	if(n > MAX){
		printf("khong hop le\n");
		return 0;
	}
		for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	int max = maxarray(arr,n);
	printf("so lon nhat la %d\n", max);
	return 0;
}

int maxarray(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
