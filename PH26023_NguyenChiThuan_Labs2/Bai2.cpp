#include <stdio.h>

int main(){
	int length, width;
	
	printf("Nhap length: ");
	scanf("%d", &length);
	printf("Nhap width: ");
	scanf("%d", &width);
	
	int  chuVi = (length + width)*2;
	int dienTich = length * width;
	
	printf("Chu vi la: %d \nDien tich la: %d", chuVi, dienTich);
	
	return 0;
}
