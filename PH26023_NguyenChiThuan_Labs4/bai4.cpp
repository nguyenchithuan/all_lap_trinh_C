#include <stdio.h>

void tinhTrungBinh(){
	int max, min;
	int sum = 0;
	int count = 0;
	printf("Nhap min: ");
	scanf("%d", &min);
	printf("Nhap max: ");
	scanf("%d", &max);
	for(int i = min; i <= max; i++){
		if(i%2==0){
			sum += i;
			count++;
		}	
	}
	int trungBinh = sum/count;
	printf("Trung binh tong cua ca so chia het cho 2 tu %d -> %d: %d\n", min, max, trungBinh);
}

void timSoNguyenTo(){
	int a;
	int count = 0;
	printf("Nhap a: ");
	scanf("%d", &a);
	for(int i = 2; i < a; i++){
		if(a%i==0){
			count++;
			break;
		}
	}
	if(count == 0){
		printf("%d la so nguyen to.\n", a);
	}else{
		printf("%d khong la so nguyen to.\n", a);
	}
}

void soChinhPhuong(){
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	for(int i = 1; i < x; i++){
		if(i*i==x){
			printf("%d la so chinh phuong!", x);
			break;	
		}
		if(i == x-1){
			printf("%d khong la so chinh phuong!", x);
			break;
		}
	}
}

int main(){
	int chon;
	do{
		printf("\n\n\n");
		printf("==============CAC CHUC NANG============\n");
		printf("=   Chuc nang 1: Tinh trung binh.     =\n");
		printf("=   Chuc nang 2: Tim so nguyen to.    =\n");
		printf("=   Chuc nang 3: Tim so chinh phuong. =\n");
		printf("=   Chuc nang 4: Thoat                =\n");
		printf("=======================================\n");
		printf("Xin moi ban chon chuc nang(1, 2, 3, 4): ");
		scanf("%d", &chon);
		switch(chon){
			case 1:
				tinhTrungBinh();
				break;
			case 2:
				timSoNguyenTo();
				break;
			case 3:
				soChinhPhuong();
				break;
			default :
				printf("Vui long nhap (1, 2, 3, 4)!\n");
		}
    }while(chon !=4);
    return 0;
}