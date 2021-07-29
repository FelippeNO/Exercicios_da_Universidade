#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");

	int n;
		scanf("%d", &n);
					
	printf("01x%.2d = %.2d\n", n, n*1);
	printf("02x%.2d = %.2d\n", n, n*2);
	printf("03x%.2d = %.2d\n", n, n*3);
	printf("04x%.2d = %.2d\n", n, n*4);
	printf("05x%.2d = %.2d\n", n, n*5);
	printf("06x%.2d = %.2d\n", n, n*6);
	printf("07x%.2d = %.2d\n", n, n*7);
	printf("08x%.2d = %.2d\n", n, n*8);
	printf("09x%.2d = %.2d\n", n, n*9);
	printf("10x%.2d = %.2d\n", n, n*10);


	return 0;
	
}
