#include <stdio.h>
int main()
{
	char n;
	printf("\nNhap  vao mot ky tu: ");
	scanf("%s",&n);
	
	if ( (n >= 'A'&& n<='Z')||( n >= 'a' && n <= ' z'));
	{
		if (n >= 'A'&& n<='Z')
		printf("\n La chu hoa");
		else 
		printf("\n La chu thuong");
		}
}

