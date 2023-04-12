#include <stdio.h>

void input (int *arr, int n) {
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void show(int *arr, int n){
	for(int i = 0; i < n; i++) {
		printf("%d  ", arr[i]);
	}
}

void sort(int *arr, int n){  // gi?m d?n
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int arr[100];
	int n;
	printf("Nhap so mang: ");
	scanf("%d", &n);
	input(arr, n);
	printf("Gia tri cua mang: ");
	show(arr, n);
	sort(arr, n);
	printf("\nSap xep the thu tu giam dan: ");
	show(arr, n);
	return 0;
}