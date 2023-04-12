#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if(a == 0){
		if( b == 0){
			printf("Phuong trinh vo so nghiem!\n");
		}else{
			printf("Phuong trinh vo nghiem!\n");
		}
	}else{
		printf("Phuong trinh co dang: %dx + %d = 0\n", a, b);
		printf("==> X = %g\n", (double)-b / a);
	}
	return 0;
}
