#include <stdio.h>
#define PI 3.14

int main(){
	float banKinh;
	
	printf("Nhap ban kinh cua hinh tron: ");
	scanf("%f", &banKinh);
	
	float dienTich = banKinh * banKinh * PI;
	float chuVi = 2 * banKinh * PI;
	
	printf("Dien tich hinh tron la: %.2f \nChu vi cua hinh tron la: %.2f", dienTich, chuVi);
	return 0;
}
