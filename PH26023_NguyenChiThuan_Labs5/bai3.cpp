#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b; 
	*b = temp;
}

int main(){
	int a;
	int b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Truoc khi doi cho: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("Sau khi doi cho: a = %d, b = %d\n", a, b);
	return 0;
}