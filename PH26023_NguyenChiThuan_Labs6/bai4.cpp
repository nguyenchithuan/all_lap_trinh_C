#include <stdio.h>

int main(){
	int n, m;
	int arr[100][100];
	printf("Nhap so hang: ");
	scanf("%d", &n);
	printf("Nhap so cot: ");
	scanf("%d", &m);
	printf("Nhap gia tri cac mang: \n");
	for(int i = 0; i < n; i++){
		for(int j= 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Gia tri sau khi binh phuong: \n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", arr[i][j]*arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}