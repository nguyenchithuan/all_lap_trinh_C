#include <stdio.h>
#include <math.h>

void hocLuc(double diem) {
	if (0 <= diem && diem <= 10);
	{
		if (diem >= 9) {
			printf("Hoc luc xuat sac!\n");
		}
		else if (diem >= 8) {
			printf("Hoc luc goi!\n");
		}
		else if (diem >= 6.5) {
			printf("Hoc luc kha!\n");
		}
		else if (diem >= 5) {
			printf("Hoc luc trung binh!\n");
		}
		else if (diem >= 3.5) {
			printf("Hoc luc yeu!\n");
		}
		else {
			printf("Hoc luc kem!\n");
		}
	}
}

void bac1(int a, int b) {
	if (a == 0) {
		if (b == 0) {
			printf("Phuong trinh vo so nghiem!\n");
		}
		else {
			printf("Phuong trinh vo nghiem!\n");
		}
	}
	else {
		printf("Phuong trinh co dang: %dx + %d = 0\n", a, b);
		printf("==> X = %g\n", (double)-b / a);
	}
}

void bac2(int a, int b, int c) {
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("Phuong trinh vo so nghiem!\n");
			}
			else {
				printf("Phuong trinh vo nghiem!\n");
			}
		}
		else {
			printf("Phuong trinh co dang: %dx + %d = 0\n", b, c);
			printf("==> X = %.2f\n", (double)-c / b);
		}
	}
	else {
		double delta = (double)(b * b - 4 * a * c);
		if (delta < 0) {
			printf("Phuong trinh vo nghiem!");
		}
		else if (delta == 0) {
			printf("Phuong trinh co nghiem kep X = %g", (float)-b / (2 * a));
		}
		else {
			printf("Phuong trinh co 2 nghiem:\n");
			printf("X1 = %g\n", ((-b + sqrt(delta)) / (2 * a)));
			printf("X2 = %g\n", ((-b - sqrt(delta)) / (2 * a)));
		}
	}
}

void tienDien(double soDien) {
	if (soDien > 0) {
		if (soDien <= 50) {
			printf("Tien dien cua ban: %g dong", 1.678 * soDien);
		}
		else if (soDien <= 100) {
			printf("Tien dien cua ban: %g dong", 1.734 * soDien);
		}
		else if (soDien <= 200) {
			printf("Tien dien cua ban: %g dong", 2.014 * soDien);
		}
		else if (soDien <= 300) {
			printf("Tien dien cua ban: %g dong", 2.536 * soDien);
		}
		else if (soDien <= 400) {
			printf("Tien dien cua ban: %g dong", 2.834 * soDien);
		}
		else {
			printf("Tien dien cua ban: %g dong", 2.927 * soDien);
		}
	}
}

int main() {
	printf("=======================ChiThuan=========================\n");
	printf("Chao Mung ban da den voi he thong cua chung toi\n");
	printf("\n1. Chuong trinh tinh hoc luc.\n");
	printf("2. Chuong trinh gia phuong trinh bac 1.\n");
	printf("3. Chuong trinh gia phuong trinh bac 2.\n");
	printf("4. Chuong trinh chuong trinh tinh tien dien\n");
	printf("Ban chon chuong trinh nao?\n");
	printf("\nBan chon chuong trinh: ");
	int chon;
	double diem, soDien;
	int a, b, c;
	scanf("%d", &chon);
	switch (chon) {
	case 1:
		printf("\nNhap diem cua ban: ");
		scanf("%lf", &diem);
		hocLuc(diem);
		break;
	case 2:
		printf("\nNhap a: ");
		scanf("%d", &a);
		printf("Nhap b: ");
		scanf("%d", &b);
		bac1(a, b);
		break;
	case 3:
		printf("Nhap a:");
		scanf("%d", &a);
		printf("Nhap b:");
		scanf("%d", &b);
		printf("Nhap c:");
		scanf("%d", &c);
		bac2(a, b, c);
		break;
	case 4:
		printf("So dien tieu thu hang thang: ");
		scanf("%lf", &soDien);
		tienDien(soDien);
		break;
	default:
		printf("Vui long nhap tu 1 => 4.\n");
		break;
	}
	return 0;
}
