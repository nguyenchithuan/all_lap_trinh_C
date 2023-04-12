#include <stdio.h>

void menu() {
	printf("\n\n");
	printf("--------------thuan---------------\n");
	printf("");
	printf("Nhap: \n");
	printf("\t1. Nhap thong tin sinh vien.\n");
	printf("\t2. Thuong tien nhan vien.\n");
	printf("\t3. Xu ly mang.\n");
	printf("\t4. So nguyen to.\n ");
	printf("\n0. Thoat.\n");
	printf("Ban chon chuc nang (0,1,2,3,4):  ");
}

struct nhanVien{
	char ten[100];
	char maNV[100];
	int tuoi;
	char queQuan[100];
};

void nhapNV(nhanVien &nv) {
	fflush(stdin);
	printf("Nhap ten: "); 			gets(nv.ten);
	printf("Nhap ma NV: "); 		gets(nv.maNV);
	printf("Nhap tuoi: "); 			scanf("%d", &nv.tuoi);
	fflush(stdin);
	printf("Nhap que quan: "); 		gets(nv.queQuan);
}

void showNV(nhanVien nv) {
	printf("\t%20s %15s %10d %20s\n",nv.ten, nv.maNV, nv.tuoi, nv.queQuan);
}

void kiemTraThang() {
	int thang;
	do {
	printf("Nhap vao so thang lam viec cua nhan vien: ");
	scanf("%d", &thang);
	} while (thang <= 0);
	
	if(thang < 6) {
		printf("Cong viec: Nhan vien.\n");
	} else if(thang < 12) {
		printf("Cong viec: teamlead.\n");
	} else if(thang < 18) {
		printf("Cong viec: Truong phong.\n");
	} else if(thang < 36) {
		printf("Cong viec: Giam doc.\n");
	} else {
		printf("Cong viec: Ban lanh dao.\n");
	}
	
}

void input(int *arr, int &n) {
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n <= 0);
	
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
}

void show3(int *arr, int n) {
	for(int i = 0; i < n; i++) {
		printf("%5d ", arr[i]);
	}
}

void demSole(int *arr, int n) {
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] % 2 == 1) {
			count++;
		}
	}
	printf("\nSo le trong mang la: %d\n", count );
}

void tinhTong(int *arr, int n) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += arr[i];
	}
	printf("Tong = %d\n", sum);
}

void input4(int *arr, int &n) {
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n <= 0);
	
	int count = 0;
	for(int i = 2; i < n; i++) {
		if(n % i == 0) {
			count = 1;
		}
	}
	if(count == 0) {
		printf("%d la so nguyen to.\n", n);
	} else {
		printf("%d khong la so nguyen to.\n", n);
	}
	
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
}

int main() {
	int chon;
	int arr[100];
	int n;
	do {
		menu();
		scanf("%d", &chon);
		
		switch(chon) {
			case 1:
				printf("Chuc nang 1: Nhap thong tin sinh vien.\n");
				nhanVien nv;
				nhapNV(nv);
				showNV(nv);
				break;
			case 2:
				printf("Chuc nang 2 : Thuong tien nhan vien.\n");
				kiemTraThang();
				break;
			case 3:
				printf("Chuc nang 3 : Xu ly mang.\n");
				input(arr, n);
				show3(arr, n);
				demSole(arr, n);
				break;
			case 4:
				printf("Chuc nang 4 : So nguyen to.\n ");
				input4(arr, n);
				tinhTong(arr, n);
				break;
			case 0:
				printf("Cam on ban da chon chuc nang cua chung toi.\n");
				break;
			default:	
				printf("Moi ban nhap lai!\n");
		}
		
	} while(chon != 0);
	return 0;
}