#include <stdio.h>

int main(){
	double soDien;
	printf("So dien tieu thu hang thang: ");
	scanf("%lf", &soDien);
	if(soDien > 0){
		if(soDien <= 50){
			printf("Tien dien cua ban: %g dong", 1.678 * soDien);
		}else if(soDien <= 100){
			printf("Tien dien cua ban: %g dong", 1.734 * soDien);
		}else if(soDien <= 200){
			printf("Tien dien cua ban: %g dong", 2.014 * soDien);
		}else if(soDien <= 300){
			printf("Tien dien cua ban: %g dong", 2.536 * soDien);
		}else if(soDien <= 400){
			printf("Tien dien cua ban: %g dong", 2.834 * soDien);
		}else{
			printf("Tien dien cua ban: %g dong", 2.927 * soDien);
		}
	}
	return 0;
}
