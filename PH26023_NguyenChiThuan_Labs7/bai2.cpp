#include <stdio.h>
#include <string.h>

int main() {
	char userName[50] = "thuan";
	int passWord = 12345;
	char userSys[50];
	int passSys;
	fflush(stdin);
	printf("Nhap user name: ");
	gets(userSys);
	printf("Nhap pass word: ");
	scanf("%d", &passSys);
	if((strcmp(userName, userSys) || passWord != passSys)){
		printf("Dang nhap that bai!\n");
	} else {
		printf("Dang nhap thanh cong!\n");
	}
	return 0;
}