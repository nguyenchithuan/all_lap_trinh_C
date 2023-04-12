#include <stdio.h>

void show(float* diem) {
	while (*diem < 0 || *diem > 10) {
		printf("Nhap diem cua ban: ");
		scanf("%f", diem);
		if(*diem < 0 || *diem > 10){
			printf("Xin vui long nhap lai diem!\n");
		}
	}
    if (*diem >= 9){
		printf("Hoc luc xuat sac!\n");
	}
	else if (*diem >= 8){
		printf("Hoc luc goi!\n");
	}
	else if (*diem >= 6.5){
		printf("Hoc luc kha!\n");
	}
	else if (*diem >= 5){
		printf("Hoc luc trung binh!\n");
	}
	else if (*diem >= 3.5){
		printf("Hoc luc yeu!\n");
	}
	else{
		printf("Hoc luc kem!\n");
	}
}

int main() {
	float diem = -1000;
	show(&diem);
	return 0;
}
