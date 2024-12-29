#include<stdio.h>
#define MAX 100
int arr[MAX];

void inputarray(int arr[], int n);

int main(){
	int n =0;
	printf("nhap so phan tu muon nhap ");
	scanf("%d", &n);
	if(n > MAX){
		printf("khong hop le\n");
		return 0;
	}
	int arr[n];
	inputarray(arr,n);
	printf("mang vua nhap: \n");
	for(int i = 0; i < n; i++){
	printf("arr[%d] = %d\n",i,arr[i]);	
	}
	return 0;
}

void inputarray(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
	
