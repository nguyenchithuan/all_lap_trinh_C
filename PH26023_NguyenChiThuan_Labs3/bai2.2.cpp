#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("Nhap c:");
	scanf("%d", &c);
	if(a == 0){
		if(b == 0){
		    if( c == 0){
			    printf("Phuong trinh vo so nghiem!\n");
		    }else{
			    printf("Phuong trinh vo nghiem!\n");
		    }
	    }else{
		    printf("Phuong trinh co dang: %dx + %d = 0\n", b, c);
		    printf("==> X = %.2f\n", (double)-c / b);
	    }
	}else{
		double delta = (double)(b*b - 4 * a * c); 
		if(delta < 0){
			printf("Phuong trinh vo nghiem!");
		}else if(delta == 0){
			printf("Phuong trinh co nghiem kep X = %g", (float)-b/(2 * a));
		}else{
			printf("Phuong trinh co 2 nghiem:\n");
			printf("X1 = %g\n", ((-b + sqrt(delta))/ (2 * a)));
			printf("X2 = %g\n", ((-b - sqrt(delta))/ (2 * a)));
		}
	}
}
