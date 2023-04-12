#include <stdio.h>
#include <string.h>

void menu(){
	printf("\n----------------Thuan--------------\n");
	printf("1. Nhap thong tin sinh vien.\n");
	printf("2. Kiem tra dieu kien qua mon.\n");
	printf("3. Nhap diem thanh phan mon C.\n");
	printf("4. Xu ly mang.\n");
	printf("5. So nguyen to.\n");
	printf("6. Thoat.\n");
}

struct student{
	char ten[30];
	int tuoi;
	char maSV[30];
	char chuyenNganh[30];
	char lop[30];
};

void input(student *sv){
	fflush(stdin);
	printf("Nhap ten: "); 		 	gets(sv->ten);
	printf("Nhap tuoi: "); 	 	 	scanf("%d", &sv->tuoi);
	fflush(stdin);
	printf("Nhap ma sv: "); 	 	gets(sv->maSV);
	printf("Nhap chuyen nganh: ");  gets(sv->chuyenNganh);
	printf("Nhap lop: "); 			gets(sv->lop);
}	

void show(student sv){
	printf("\t%20s %20d %20s %20s %20s\n", sv.ten, sv.tuoi, sv.maSV, sv.chuyenNganh, sv.lop);
}

void quaMon(){
	float n;
	do{
		printf("Nhap dien: ");
		scanf("%f", &n);
	} while (n < 0 || n > 10);
	
	if(n < 5) {
		printf("Khong du dieu kien thi.\n");
	}else if (n < 6) {
		printf("Trung binh.\n");
	}else if (n < 7) {
		printf("Kha.\n");
	}else if (n < 9) {
		printf("Gioi.\n");
	}else {
		printf("Ong vang.\n");
	}
}



void diem(int n){
	
	do {
		printf("Nhap vao so dau dien: ");
		scanf("%d ", &n);
	} while (n <= 0);
	int arr[n];
	
	for(int i = 0; i < n; i++) {
		printf("Diem %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Hien thi diem ban vua nhap la: \n");
	for(int i = 0; i < n; i++) {
		printf("Diem %d: %d\n", i, arr[i]);
	}
}

void mang(int n){
	
	int count = 0;
	int count_1 = 0;
	int sum = 0;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n <= 0);
	
	int arr[n];
	
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++) {
		if(arr[i] % 3 == 0){
			count++;
		}
		
		sum += arr[i];
		
		count_1++;
	}
	
	float tb = (float)sum/count_1;
	printf("%d so chia cho 3.\n", count);
	printf("Trung binh cua mang: %g", tb);
}

void so(int n){
	int count = 0;
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n < n);
	
	int arr[n];
	
	for(int i = 2; i < n; i++) {
		if(n%i == 0){
			count = 1;
		}
	}
	
	if(count == 0) {
		printf("%d la so nguyen to!\n", n);
	} else {
		printf("%d khong la so nguyen to!\n", n);
	}
	
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Gia tri: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int n;
	struct student sv1;
	int chon;
	do{
		menu();
		printf("Ban chon Chuong trinh nao(1,2,3,4,5,6): ");
		scanf("%d", &chon);
		switch(chon){
			case 1:
				printf("Chuc nang 1: Thong tin sinh vien.\n");
				input(&sv1);
				show(sv1);
				break;
			case 2:
				printf("Chuc nang 2: Kiem tra dieu kien qua mon.\n");
				quaMon();
				break;
			case 3:
				printf("Chuc nang 3: Diem thanh phan mon C.\n");
				diem(n);
				break;
			case 4:
				printf("Chuc nang 4: Xu ly mang.\n");
				mang(n);
				break;
			case 5:
				printf("Chuc nang 5: So nguyen to.\n");
				so(n);
				break;
			case 6:
				printf("Cam on ban da chon chuong trinh cua chung toi!\n");
				break;
			default:
				printf("Moi ban nhap lai!\n");
				break;
		 	}
		
	} while (chon != 6);
	return 0;
}

