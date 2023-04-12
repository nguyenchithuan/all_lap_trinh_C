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

int searchMax(int *arr, int n) {
	int max = arr[0];
	for(int i = 0; i < n; i++) {
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int searchMin(int *arr, int n) {
	int min = arr[0];
	for(int i = 0; i < n; i++) {
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	int arr[100];
	int n;
	printf("Nhap so mang: ");
	scanf("%d", &n);
	input(arr, n);
	printf("Gia tri cua mang: ");
	show(arr, n);
	printf("\nMax: %d\n", searchMax(arr, n));
	printf("\nMin: %d\n", searchMin(arr, n));
	return 0;
}