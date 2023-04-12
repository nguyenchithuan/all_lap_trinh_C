#include <stdio.h>

int main (){
	float toan , ly, hoa;
	printf("Nhap diem mon toan: ");
	scanf("%f", &toan);
	printf("Nhap diem mon ly: ");
	scanf("%f", &ly);
	printf("Nhap diem mon hoa: ");
	scanf("%f", &hoa);
	
	float diemTrungBinh = (toan*3 + ly*2 + hoa)/6;
	
	printf("\nDiem trung binh cua 3 mon toan, ly, hoa la: %.2f\n", diemTrungBinh);
	printf("\nVoi:\nHe so toan * 3\nHe so ly * 2\nHe so hoa * 1");
	
	return 0;
}
