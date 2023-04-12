#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

void soNguyen(double x){ // của chức năng 1
	if(x == (int)x){
		printf("%g la so nguyen!\n", x);
	}else {
		printf("%g khong la so nguyen!\n", x);
	}
}

void soNguyenTo(double x){ // của chức năng 1
	// tìm số nguyên tố.
	int count = 0;
	for(int i = 2; i < (int)x; i++){
		if((int)x % i == 0){
			count ++;
			break;
		}
	}
	if(count == 0 && x == (int)x){
		printf("%g la so nguyen to!\n", x);
	}else{
		printf("%g khong la so nguyen to!\n", x);
	}
}

void soChinhPhuong(double x){ // của chức năng 1
	// tìm số chính phương.
	int count = 0;
	for(int i = 2; i <= (int)x; i++){
		if(i*i==(int)x){
			count = 1;
			break;
		}
	}
	if(count == 1 && x == (int)x){
		printf("%g la so chinh phuong!\n", x);
	}else{
		printf("%g khong la so chinh phuong!\n", x);
	}
}

void chucNang1(){
	double x;
	char traLoi;
	do{
	printf("Nhap X: ");
	scanf("%lf", &x);
	soNguyenTo(x);
	soChinhPhuong(x);
	soNguyen(x);
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

int UCLN(int a, int b){  // của chức năng 2
	int UCLN1 = 1;
	if(a == 0 || b == 0){
	UCLN1 = a + b;
	}else{
		while(a != b){
			if(a > b){
				a = a - b;
			}else{
				b = b - a;
			}
		}
		UCLN1 = a;
	}
	return UCLN1;
}

int BCNN(int a, int b){ // của chức năng 2
	int BCNN1;
	BCNN1 = a*b/UCLN(a, b);
	return BCNN1;
}

void chucNang2(){
	int a, b;
	char traLoi;
	do{
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("UCLN = %d\n", UCLN(a, b));
	printf("BCNN = %d", BCNN(a, b));
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

void chucNang3(){
	int a, b, thoiGian;
	long long tien;
	char traLoi;
	do{
	START:
	printf("Nhap vao gio bat dau (12h->23h): ");
	scanf("%d", &a);
	printf("Nhap vao gio ket thuc (12h->23h): ");
	scanf("%d", &b);
	thoiGian = b - a;
	if( b > a && a >= 12 && b <= 23){
		
		if(thoiGian <=3 && ((a >= 14 && a < 17) || (b > 14 && b <= 17))) {
			tien = thoiGian * 150000 * 90 / 100;
			printf("Tien phai tra cho Karaoke la: %dVND\n", tien);
		}else if(thoiGian <= 3){
			tien = thoiGian * 150000;
			printf("Tien phai tra cho Karaoke la: %dVND\n", tien);
		}else if(thoiGian >= 4 && ((a >= 14 && a < 17) || (b > 14 && b <= 17))){
			tien = (3*150000 + (thoiGian-3)*150000*70/100)*90/100;
			printf("Tien phai tra cho Karaoke la: %dVND\n", tien);
		}else{
			tien = 3 * 150000 + (thoiGian - 3) * 150000 * 70 / 100;
			printf("Tien phai tra cho Karaoke la: %dVND\n", tien);
		}
		
	}else{                        
		printf("Error! Moi ban nhap lai!\n");
		goto START;
	}
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

void chucNang4(){
	#define bac1 1.678
	#define bac2 1.734
	#define bac3 2.014
	#define bac4 2.536
	#define bac5 2.834
	#define bac6 2.927
	float a;
	char traLoi;
	do{
	printf ("Nhap so kWh su dung: ");
	scanf ("%f", &a);
	if (a >= 0 && a <= 50){
		printf ("Tien dien ban phai dong la: %.3f VND\n", a*bac1);
	}else if (a <= 100){
		printf ("Tien dien ban phai dong la: %.3f VND\n", 50*bac1 + (a-50)*bac2);
	}else if (a <= 200){
		printf ("Tien dien ban phai dong la: %.3f VND\n", 50*bac1+50*bac2+(a-100)*bac3);
	}else if (a <= 300){
		printf ("Tien dien ban phai dong la: %.3f VND\n", 50*bac1+50*bac2+100*bac3+(a-200)*bac4);
	}else if (a <= 400){
		printf ("Tien dien ban phai dong la: %.3f VND\n", 50*bac1+50*bac2+100*bac3+100*bac4+(a-300)*bac5);
	}else if (a > 400){
		printf ("Tien dien ban phai dong la: %.3f VND\n", 50*bac1+50*bac2+100*bac3+100*bac4+100*bac5+(a-400)*bac6);
	}else if (a < 0){
		printf ("Xin moi ban nhap lai!\n");
	}
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

void chucNang5(){
	int soTien;
	int soTo_500, soTo_200, soTo_100, soTo_50, soTo_20, soTo_10, soTo_5, soTo_2, soTo_1;
	int soDu;
	char traLoi;
	do{
	START :
	printf("Menh gia tien gom: 500,200,100,50,20,10,5,2,1.\n");
	printf("Nhap tien cua ban: ");
	scanf("%d", &soTien);
	
	if(soTien <= 0) {
		printf("\nMoi ban nhap lai so tien (tien > 0)!\n");
		goto START;
	}
	
	soTo_500 = soTien / 500; // tính số tờ 500
	soDu = soTien % 500;
	soTo_200 = soDu / 200; // tính số tờ 200
	soDu = soDu % 200;
	soTo_100 = soDu / 100; // tính số tờ 100
	soDu = soDu % 100;
	soTo_50 = soDu / 50; // tính số tờ 50
	soDu = soDu % 50;
	soTo_20 = soDu / 20; // tính số tờ 20
	soDu = soDu % 20;
	soTo_10 = soDu / 10; // tính số tờ 10
	soDu = soDu % 10;
	soTo_5 = soDu / 5; // tính số tờ 5
	soDu = soDu % 5;
	soTo_2 = soDu / 2; // tính số tờ 2
	soDu = soDu % 2;
	soTo_1 = soDu; // tính số tờ 1
	
	printf("Doi ra: \n");
	if(soTo_500 != 0){
		printf("%d to 500.\n", soTo_500);
	}
	if(soTo_200 != 0){
		printf("%d to 200.\n", soTo_200);
	}
	if(soTo_100 != 0){
		printf("%d to 100.\n", soTo_100);
	}
	if(soTo_50 != 0){
		printf("%d to 50.\n", soTo_50);
	}
	if(soTo_20 != 0){
		printf("%d to 20.\n", soTo_20);
	}
	if(soTo_10 != 0){
		printf("%d to 10.\n", soTo_10);
	}
	if(soTo_5 != 0){
		printf("%d to 5.\n", soTo_5);
	}
	if(soTo_2 != 0){
		printf("%d to 2.\n", soTo_2);
	}
	if(soTo_1 != 0){
		printf("%d to 1.\n", soTo_1);
	}
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

void chucNang6(){
	long long soTien;
	long long laiPhaiTra;
	long long laiGoc;
	long long soTienPhaiTra;
	char traLoi;
	do{
	START :
	printf("Tien vay: ");
	scanf("%lld", &soTien);
	if(soTien <= 0){
		printf("\nMoi ban nhap so (tien > 0)!\n");
		goto START;
	}
	printf("Lai thang: 5%.\n");
	printf("Ky han: 12 thang.\n");
	printf("\t%10s \t%15s \t%15s \t%15s \t%15s\n", "Ky han", "Lai phai tra", "Goc phai tra","So tien phai tra", "So tien con lai");
	
	laiGoc = soTien / 12;
	
	for(int i = 1; i <= 12; i++){
		laiPhaiTra = soTien * 0.05;
		soTienPhaiTra = laiPhaiTra + laiGoc;
		soTien -= laiGoc;
		printf("\t%10d \t%15lld \t%15lld \t%15lld \t%15lld\n", i, laiPhaiTra, laiGoc, soTienPhaiTra, soTien);
	}
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

void chucNang7(){
	int phanTranVayMax;
	char traLoi;
	do{
	printf("Nhap so phan tram vay toi da: ");
	scanf("%d", &phanTranVayMax);
	float khoanVay = 500 * phanTranVayMax / 100;
	float phanDatCon = 500 - khoanVay;
	int thoiGianVay = 288;
	
	float gocThang = khoanVay / thoiGianVay;
	float gocNam = gocThang * 12;
	
	float soTienCon = khoanVay;
	
	for(int i = 1; i <= 24; i++){
		float laiNam = soTienCon * 0.072;
		float laiThang = laiNam / 12; 
		float traThang = laiThang + gocThang;
		printf("Nam thu %d: moi thang tra %.3f\n", i, traThang);
		soTienCon = soTienCon - gocNam;
	}
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

struct student{ // của chức năng 8
	char ten[100];
	float diem;
	char hocLuc[100];
};


void input(student &sv){ // của chức năng 8
	fflush(stdin); 		printf("Nhap ten: "); 	gets(sv.ten);
	START:
	printf("Nhap diem: ");		scanf("%f", &sv.diem);
	if(sv.diem < 0 || sv.diem > 10){
		printf("Vui long nhap lai diem (0 < diem < 10)!\n");
		goto START;	
	}
	
	if(sv.diem >= 9) {
		strcpy(sv.hocLuc, "Xuat sac!");
	}else if(sv.diem >= 8){
		strcpy(sv.hocLuc, "Gioi!");
	}else if(sv.diem >= 6.5){
		strcpy(sv.hocLuc, "Kha!");
	}else if(sv.diem >= 5){
		strcpy(sv.hocLuc, "Trung Binh!");
	}else{
		strcpy(sv.hocLuc, "Yeu!");
	}
	
}

void show(student sv){ // của chức năng 8
	printf("\n\t%20s \t%10.1f \t%20s \n", sv.ten, sv.diem, sv.hocLuc);
}

void nhapDanhSach(student arr[], int &n){  // của chức năng 8
	do{
		printf("Nhap so sinh vien (sv > 0): ");
		scanf("%d", &n);
	}while(n <= 0);
	for(int i = 0; i < n; i++){
		printf("\nNhap sinh vien thu %d: \n", i+1);
		input(arr[i]);
	}
}

void xuatSinhVien(student* arr, int n){ // của chức năng 8
	for(int i = 0; i < n; i++){
		show(arr[i]);
	}
}

void sapXep(student* arr, int n){ // của chức năng 8
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i].diem < arr[j].diem){
				student temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void chucNang8(){
	student arr[100];
	int n;
	char traLoi;
	do{
	nhapDanhSach(arr, n);
	sapXep(arr, n);
	printf("\n\t%20s \t%10s \t%20s \n", "Ho va ten", "Diem", "Hoc luc");
	xuatSinhVien(arr, n);
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

void chucNang9(){ // random.
	int a, b;
	char traLoi;
	do{
	srand(time(NULL));
	int random_1 = rand()%15 + 1;
	int random_2 = rand()%15 + 1;
	printf("Nhap vao so (1 => 15).\n");
	START:
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	if(a < 1 || a > 15 || b < 1 || b > 15){
		printf("\nMoi chon lai (1 => 15)!\n");
		goto START;
	}
	printf("So quay ra %d va %d.\n", random_1, random_2);
	if(a != random_1 && a != random_2 && b != random_1 && b != random_2){
		printf("Ban khong chung so nao: Chuc ban may man lan sau.\n");
	}else if((a == random_1 && a == random_2) || (b == random_1 && b == random_2) 
		   || (a == random_1 && b == random_2) || (b == random_1 && a == random_2)){
		printf("Ban chung 2 so: Chuc ban mung ban duoc gia nhat.\n");
	}else {
		printf("Ban chung 1 so: Chuc ban mung ban duoc gia nhi.\n");
	}
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}

void input(int &tuSo1, int &mauSo1, int &tuSo2, int &mauSo2){ // chức năng 10
	printf("Nhap tu so 1: ");
	scanf("%d", &tuSo1);
	do {
	printf("Nhap mau so 1: ");
	scanf("%d", &mauSo1);
	} while(mauSo1 == 0);
	
	printf("Nhap tu so 2: ");
	scanf("%d", &tuSo2);
	do {
	printf("Nhap mau so 2: ");
	scanf("%d", &mauSo2);
	} while(mauSo2 == 0);
}

void rutGon(int &tuSo, int &mauSo){ // chức năng 10
	int a = tuSo;
	int b = mauSo;
	int ucln = 1;
	a = abs(a);
	b = abs(b);
	if(a == 0 || b == 0){
		ucln = a + b;
	}else {
		while(a != b){
			if(a > b){
				a = a - b;
			}else{
				b = b - a;
			}
		}
		ucln = a;
	}
	tuSo /= ucln;
	mauSo /= ucln;
}


void tong (int tuSo1, int mauSo1, int tuSo2, int mauSo2){ // chức năng 10
	int tuSo = tuSo1*mauSo2 + tuSo2*mauSo1;
	int mauSo = mauSo1*mauSo2;
	if(mauSo < 0){
		tuSo *= -1;
		mauSo *= -1;	
	}
	rutGon(tuSo, mauSo);
	if(mauSo != 1){
		printf("Tong: \t%d/%d + %d/%d = %d/%d\n", tuSo1, mauSo1, tuSo2, mauSo2, tuSo, mauSo);
	}else {
		printf("Tong: \t%d/%d + %d/%d = %d\n", tuSo1, mauSo1, tuSo2, mauSo2, tuSo);
	}
}

void tru (int tuSo1, int mauSo1, int tuSo2, int mauSo2){ // chức năng 10
	int tuSo = tuSo1*mauSo2 - tuSo2*mauSo1;
	int mauSo = mauSo1*mauSo2;
	if(mauSo < 0){
		tuSo *= -1;
		mauSo *= -1;	
	}
	rutGon(tuSo, mauSo);
	if(mauSo != 1){
		printf("Tru: \t%d/%d - %d/%d = %d/%d\n", tuSo1, mauSo1, tuSo2, mauSo2, tuSo, mauSo);
	}else {
		printf("Tru: \t%d/%d - %d/%d = %d\n", tuSo1, mauSo1, tuSo2, mauSo2, tuSo);
	}

}

void nhan (int tuSo1, int mauSo1, int tuSo2, int mauSo2){ // chức năng 10
	int tuSo = tuSo1*tuSo2;
	int mauSo = mauSo1*mauSo2;
	if(mauSo < 0){
		tuSo *= -1;
		mauSo *= -1;	
	}
	rutGon(tuSo, mauSo);
	
	if(mauSo != 1){
		printf("Nhan: \t%d/%d * %d/%d = %d/%d\n", tuSo1, mauSo1, tuSo2, mauSo2, tuSo, mauSo);
	}else {
		printf("Nhan: \t%d/%d * %d/%d = %d\n", tuSo1, mauSo1, tuSo2, mauSo2, tuSo);
	}
}

void chia (int tuSo1, int mauSo1, int tuSo2, int mauSo2){ // chức năng 10
	int tuSo = tuSo1 * mauSo2;
	int mauSo = mauSo1 * tuSo2;
	if(mauSo < 0){
		tuSo *= -1;
		mauSo *= -1;	
	}
	rutGon(tuSo, mauSo);
	
	if (mauSo != 1){
		printf("Chia: \t%d/%d %c %d/%d = %d/%d\n", tuSo1, mauSo1,'%', tuSo2, mauSo2, tuSo, mauSo);
	}else {
		printf("chia: \t%d/%d %c %d/%d = %d\n", tuSo1, mauSo1,'%', tuSo2, mauSo2, tuSo);
	}
}

void chucNang10(){
	int tuSo1, tuSo2, mauSo1, mauSo2;
	char traLoi;
	do{
	input(tuSo1, mauSo1, tuSo2, mauSo2);
	tong(tuSo1, mauSo1, tuSo2, mauSo2);
	tru(tuSo1, mauSo1, tuSo2, mauSo2);
	nhan(tuSo1, mauSo1, tuSo2, mauSo2);
	chia(tuSo1, mauSo1, tuSo2, mauSo2);
	
	printf("\nBan con muon tiep tuc khong (y/n): ");
	fflush(stdin);
	scanf("%c", &traLoi);
	} while(traLoi != 'n');
}


void menu(){
	printf("\n\n\n");
	printf("=============================MENU==============================\n");
	printf("|       Thong tin cac chuc nang                               |\n");
	printf("|       1. Kiem tra so nguyen.                                |\n");
	printf("|       2. Tim uoc chung va boi chung cua 2 so.               |\n");
	printf("|       3. Chuong trinh tinh tien cho quan Kraoke.            |\n");
	printf("|       4. Tinh tien dien.                                    |\n");
	printf("|       5. Chuc nang doi tien.                                |\n");
	printf("|       6. Chuc nang tinh lai suat vay ngan hang tra gop.     |\n");
	printf("|       7. Chuong trinh vay tien mua xe.                      |\n");
	printf("|       8. Sap xep thong tin sinh vien.                       |\n");
	printf("|       9. Xay dung game FPOLY-LOTT (2/15).                   |\n");
	printf("|       10. Xay dung chuong trinh tinh toan phan so.          |\n");
	printf("|       0. Thoat                                              |\n");
	printf("===============================================================\n");
	printf("Ban chon chuc nang: ");
}

int main() {
	int chon;
	do{
	menu();
	scanf("%d", &chon);
	switch (chon)
	{
	case 1:
		printf("Chuc Nang 1: Kiem tra so nguyen.\n");
		chucNang1();
		break;
	case 2:
		printf("Chuc Nang 2: Tim uoc chung va boi chung cua 2 so.\n");
		chucNang2();
		break;
	case 3:
		printf("Chuc Nang 3: Chuong trinh tinh tien cho quan Kraoke.\n");
		chucNang3();
		break;
	case 4:
		printf("Chuc Nang 4: Tinh tien dien.\n");
		chucNang4();
		break;
	case 5:
		printf("Chuc Nang 5: Chuc nang doi tien.\n");
		chucNang5();
		break;
	case 6:
		printf("Chuc Nang 6:Chuc nang tinh lai suat vay ngan hang tra gop.\n");
		chucNang6();
		break;
	case 7:
		printf("Chuc Nang 7: Chuong trinh vay tien mua xe.\n");
		chucNang7();
		break;
	case 8:
		printf("Chuc Nang 8: Sap xep thong tin sinh vien.\n");
		chucNang8();
		break;
	case 9:
		printf("Chuc Nang 9: Xay dung game FPOLY-LOTT (2/15).\n");
		chucNang9();
		break;
	case 10:
		printf("Chuc Nang 10: Xay dung chuong trinh tinh toan phan so.\n");
		chucNang10();
		break;
	case 0:
		printf("Cam on ban da dung chuc nang cua chung toi!\n");
		break;
	default:
		printf("Error: Moi ban chon lai chuc nang!\n");
		break;
	}
 	}while(chon != 0);
	return 0;
}
