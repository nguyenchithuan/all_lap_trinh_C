#include <stdio.h>

int main(){
	int max, min;
	int sum = 0;
	int count = 0;
	
	printf("Nhap min: ");
	scanf("%d", &min);
	printf("Nhap max: ");
	scanf("%d", &max);
	
	for(int i = min; i <= max; i++){
		if(i%2==0){
			sum += i;
			count++;
		}	
	}
	
	float trungBinh = (float)sum/count;
	
	printf("Trung binh tong cua cac so chia het cho 2 tu %d -> %d: %g", min, max, trungBinh);
	
	return 0;
}