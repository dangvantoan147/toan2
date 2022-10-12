#include<stdio.h>

int main() {
	int a, b, c;
	printf("\nNhap 3 canh cua tam giac: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a*a== b*b + c*c) {
		printf("Co a la canh huyen: ");
	}
	
	if (b*b == a*a + c*c) {
		printf("Co b la canh huyen: ");
	}
	if (c*c == b*b + a*a) {
		printf("Co c laf canh huyen: ");
		printf("La mot tam giac vuong: ");
		//so lon nhat la canh huyen
	}
	else
	{
		printf("\nKhong phai tam giac vuong: ");
	}
	return 0;

     
}
