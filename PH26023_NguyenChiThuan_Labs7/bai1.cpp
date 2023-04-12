#include <stdio.h>
#include <string.h>

int main() {
	int count_1 = 0; // dem nguyen am (e u o a i)
	int count_2 = 0; // dem phu am 
	char nhap[100];
	
	printf("Nhap: ");
	gets(nhap);
	int len = strlen(nhap);
	
	for(int i = 0; i < len; i++){
		
		if(nhap[i] == 'e' || nhap[i] == 'u' || nhap[i] == 'o' || nhap[i] == 'a' || nhap[i] == 'i'){
		   	count_1++;
		} else if(nhap[i] != ' ' && nhap[i] != '  ' && !(nhap[i] >= '0' && nhap[i] <= '9') ){
			count_2++;
		}
		
	}
	printf("%d nguyen am\n", count_1);
	printf("%d phu am\n", count_2);
	return 0;
}