#include<stdio.h>
#include<string.h>

int main() {
	char arr[5][100];
	printf("Nhap 5 chuoi.\n");
	for(int i = 0; i < 5; i++){
		printf("Chuoi %d: ", i);
		gets(arr[i]);
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(strcmp(arr[i], arr[j]) > 0){
				char temp[100];
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
	
	printf("\nHien thi chuoi.\n");
	for(int i = 0; i < 5; i++){
		printf("%s\n", arr[i]);
	}
   return(0);
}