#include <stdio.h>

int searchMax(int a, int b, int c){
	int max;
	if(a > b && a > c){
		max = a;
	}else if(b > c){
		max = b;
	}else{
		max = c;
	}
	return max;
}

int main(){
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	printf("Max trong 3 so (%d, %d, %d): %d", a, b, c, searchMax(a, b, c));
	return 0;
}