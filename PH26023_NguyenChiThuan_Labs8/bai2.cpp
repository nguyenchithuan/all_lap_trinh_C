#include <stdio.h>
#include <string.h>
int main(){
	struct SinhVien{
		char maSo[20];
		char ten[30];
		char nganhHoc[30];
		float diem;
	}mangSV[50];
	int n;
	
	do{
		printf("Nhap so sinh vien: ");
		scanf("%d", &n);
	} while (n <= 0);
	
	for (int i = 0; i < n; i++){
		printf("Sinh vien thu %d.\n", i + 1);
		fflush(stdin);
		printf("Nhap ma so: "); 			gets(mangSV[i].maSo);
		printf("Nhap ten: "); 				gets(mangSV[i].ten);
		printf("Nhap nganh hoc: "); 		gets(mangSV[i].nganhHoc);
		printf("Nhap diem: "); 				scanf("%f", &mangSV[i].diem);
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if(mangSV[i].diem < mangSV[j].diem){
				SinhVien temp_1 = mangSV[i];
				mangSV[i] = mangSV[j];
				mangSV[j] = temp_1;
			}
		}
	}
	
	
	for (int i = 0; i < n; i++){
		printf("\t%20s %20s %20s %10.1f\n", mangSV[i].maSo, mangSV[i].ten, mangSV[i].nganhHoc, mangSV[i].diem);
	}
	return 0;
}