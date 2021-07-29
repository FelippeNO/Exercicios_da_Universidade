#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n2, d, validPrimo;
	while (1)
	{
		d = 2;
		validPrimo = 1;
		scanf("%d", &n2);
		if (n2 == 0)
		{
			break;
		}
		else if (n2 < 2 || n2 > 100)
		{
			printf("Valor invalido! Tente novamente!\n");
			validPrimo = 2;
		}
		while (validPrimo == 1 && d <= n2 / 2)
		{
			if (n2 % d == 0)
				validPrimo = 0;
			d = d + 1;
		}
		if (validPrimo == 1)
		{
			printf("Primo\n");
		}
		else if (validPrimo == 0)
		{
			printf("Nao primo\n");
		}
	}
}