#include <stdio.h>

void menu(){
	printf("\n\n");
	printf("----------------------------\n");
	printf("\t1. Nhap thong tin.\n");
	printf("\t2. Xu ly mang.\n");
	printf("\t3. So nguyen to.\n");
	printf("\t0. Thoat.\n");
	printf("Ban chon chuc nang nao cua chung toi(1,2,3): ");
}

struct student{
	char ten[30];
	int tuoi;
	char queQuan[30];
	char maSV[30];
};

void inputSV(student &sv){ // chuc nang 1
	fflush(stdin);
	printf("Nhap ten: ");					gets(sv.ten);
	printf("Nhap tuoi: ");					scanf("%d", &sv.tuoi);
	fflush(stdin);
	printf("Nhap que quan: ");				gets(sv.queQuan);
	printf("Nhap ma Sv: ");					gets(sv.maSV);				
}

void showSv(student sv){ // chuc nang 1
	printf("\t%20s %10s %20s %20s\n", "Ten", "Tuoi", "Que quan", "Ma sv");
	printf("\t%20s %10d %20s %20s\n", sv.ten, sv.tuoi, sv.queQuan, sv.maSV);
}

void nhapMang(int *arr, int &n){
	do{
		printf("Nhap so phan tu trong mang: ");
		scanf("%d", &n);
	}while (n <= 0);
	
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void showMang(int *arr, int n){
	printf("Gia tri cua mang: ");
	for(int i = 0; i < n; i++){
		printf("%d  ", arr[i]);
	}
}

void sapXep(int *arr, int n){
	printf("Sap xep tang dan.\n");
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void dem(int *arr, int n){
	int count_1 = 0, count_2 = 0, count_3 = 0;
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			count_1++;
		}
		if(arr[i] % 5 == 0){
			count_2++;
		}
		sum += arr[i];
		count_3 ++;
	}
	float tb = (float)sum / count_3; 
	printf("\nTrong mang co %d so chan.\n", count_1);
	printf("Trong mang co %d so chia het cho 5.\n", count_2);
	printf("Trung binh cong la: %.2f", tb);
}

void timSoNguyento(){
	int n;
	printf("Nhap mot so bat ki: ");
	scanf("%d", &n);
	int sum;
	int count = 0;
	for(int i = 1; i <= n; i++){
		count = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				count++;
			}
		}
		if(count == 2){
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nTong: %d", sum);
}



int main(){
	int chon;
	struct student sv1;
	int arr[100];
	int n;
	do{
		menu();
		scanf("%d", &chon);
		switch(chon){
			case 1:
				printf("Chuc nang 1: Nhap thong tin!\n");
				inputSV(sv1);
				showSv(sv1);
				break;
			case 2:
				printf("Chuc nang 2: Xu ly mang!\n");
				nhapMang(arr, n);
				showMang(arr, n);
				sapXep(arr, n);
				showMang(arr, n);
				dem(arr, n);
				break;
			case 3:
				printf("Chuc nang 3: So nguyen to!\n");
				timSoNguyento();
				break;
			case 0:
				printf("Cam on ban da chon chuong trinh!\n");
				break;
			default:
				printf("Moi ban nhap (1,2,3,0)!\n");
		}
	} while(chon != 0);
}