#include<stdio.h>

int main() {
	int n, i, giaithua;
	
	do{
		printf("\nNhap vao n (n>=0)");
		scanf("%d", &n);
	}while(n<0);
	
	giaithua=1;
	for(i=1; i<=n; i++) {
		giaithua = giaithua * i;
	}
	printf("Giai thua = %d", giaithua);
}
