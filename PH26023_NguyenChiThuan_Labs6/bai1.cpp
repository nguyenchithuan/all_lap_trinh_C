#include <stdio.h>

void input(int *arr, int n){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

double tinhTrungBinh(int *arr, int n){
	int count = 0;
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 3 ==0){
			tong += arr[i];
			count++;
		}
	}
	float trungBinh = (double)tong/count;
	return trungBinh;
}

int main(){
	int n;
	int arr[100];
	printf("Nhap phan tu trong mang: ");
	scanf("%d", &n);
	input(arr, n);
	printf("Trung binh cac gia tri trong mang chia het cho 3 la: %g", tinhTrungBinh(arr, n));
	return 0;
}