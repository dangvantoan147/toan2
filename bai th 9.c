#include<stdio.h>

int main() {
	int a, b, c, temp;
	printf("Nhap 3 a, b, c : ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b)
	{ 
	   temp=a; a=b; b=temp;
	}
	if (a>c)
	{
		temp=a; a=c; c=temp;
	}
	if(b>c)
	{
		temp=b; b=c; c=temp;
	}
    printf("\nTang dan %d %d %d", a, b, c);
    getch();
}
