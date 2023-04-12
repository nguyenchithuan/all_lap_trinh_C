#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int count = 0;
	int count_1 = 0;
	printf("Tim kiem so nguyen to thu n.\n");
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while (n <= 0 || n >= 100);
	
	for(int i = 2; i <= 1000; i++){
		
		count = 0;
		
		for(int j = 2; j < i; j++){
			if(i % j == 0){
				count = 1;
				break;
			}
		}
		
		if(count == 0){
			count_1++;
			printf("%d ", i);
		}
		
		if(count_1 == n){
			printf("So nguyen to thu %d la %d", n, i);
			return 0;
		}
	}
	return 0;
}