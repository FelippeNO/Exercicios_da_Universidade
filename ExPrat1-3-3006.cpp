#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");
	int a;
	float b;
	float c;
	float d;

	scanf("%d", &a);
	scanf("%f", &b);

	c = (b / 100) * a;
	d = a + c;

	printf("Valor do reajuste: %.2f\nValor do produto reajustado: %.2f", c, d);

	return 0;
	
}
