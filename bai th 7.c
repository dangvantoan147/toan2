#include<stdio.h>

int main(){
	int num1, num2;
	printf("Nhap num1, num2: ");
	scanf("%d%d", &num1, &num2);
	if (num1==0 || num2 ==0){
	printf("moi so dei la uoc cua 0 va 0 khong la uoc cua so ngyuyen nao ca: ");
	//xet truong hop 1 trong 2 so hoac ca 2 so ==0
	
} else {
	int r1=num1%num2;
	int r2=num2%num1;
	
	if (r1==0){
		printf("num2 la uoc cua num1: ");}
		else if(r2==0) {
			printf("num1 la uoc cua num2: ");}
		else { printf("khong co so nao la uoc chung cua so con lai: ");}
		
		}
}
		

