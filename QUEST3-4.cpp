#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n2;

	while (1)
	{
		scanf("%d", &n2);
		if (n2 == -101)
		{
			break;
		}
		else if (n2 >= -100 && n2 <= 100 && n2 > 0 && n2 % 2 == 0)
		{
			printf("EVEN POSITIVE\n");
		}
		else if (n2 >= -100 && n2 <= 100 && n2 < 0 && n2 % 2 == 0)
		{
			printf("EVEN NEGATIVE\n");
		}
		else if (n2 >= -100 && n2 <= 100 && n2 < 0 && n2 % 2 != 0)
		{
			printf("ODD NEGATIVE\n");
		}
		else if (n2 >= -100 && n2 <= 100 && n2 > 0 && n2 % 2 != 0)
		{
			printf("ODD POSITIVE\n");
		}
		else if (n2 < -100 || n2 > 100)
		{
			printf("Valor invalido! Tente novamente!\n");
		}
		else if (n2 == 0)
		{
			printf("NULL\n");
		}
	}
}
