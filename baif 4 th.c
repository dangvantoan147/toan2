#include<stdio.h>

int main() {
	char n;
	scanf("%s", &n);
	printf("\nNhap mot ki tu: ");
	
	if ((n >= 'A' && n<= 'Z') || (n >= 'a' && n<= 'z')) {
		switch (n)
		{
			case 'A' : case 'E' : case 'I' : case 'O': case 'U':
			case 'a' : case 'e' : case 'i' : case 'o': case 'u':
				printf("\nDay la mot nguyen am: ");
				break;
			default:
				printf("\nDay la mot phu am: ");
			
		}
	}
	else
	{
		printf("\nKhong thuoc trong bang Alphabet: ");
		
	}
	return 0;
}
