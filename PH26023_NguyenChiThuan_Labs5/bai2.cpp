#include <stdio.h>

int checkYear(int year){
	int count = 0;
	if(year % 400 == 0){
		return count = 1;
	}
	if(year % 4 == 0 && year % 100 != 0){
		return count = 1;
	}
	return count;
}

int main(){
	int year;
	printf("Nhap nam: ");
	scanf("%d", &year);
	if(checkYear(year) == 1){
		printf("Nam %d la nam nhuam.\n", year);
	}else {
		printf("Nam %d khong la nam nhuam.\n", year);
	}
	return 0;
}