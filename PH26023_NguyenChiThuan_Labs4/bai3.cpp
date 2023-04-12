#include <stdio.h>

int main(){
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
	return 0;
}