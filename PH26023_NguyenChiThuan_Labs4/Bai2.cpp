#include <stdio.h>

int main(){
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
	return 0;
}