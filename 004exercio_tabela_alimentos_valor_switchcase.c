#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	float x1, x3;

	scanf("%d", &num1);
	scanf("%d", &num2);

	switch (num1)
	{
	case 1:
	{
		x1 = 4.00;
		break;
	case 2:
	{
		x1 = 4.50;
		break;
	}
	case 3:
	{
		x1 = 5.00;
		break;
	}
	case 4:
	{
		x1 = 2.00;
		break;
	}
	case 5:
	{
		x1 = 1.50;
		break;
	}
	}
	}

	if ((num1 >= 1) && (num1 <= 5))
	{
		x3 = x1 * num2;
		printf("Total: R$ %.2f", x3);
	}
	else
	{
		printf("Codigo invalido");
	}
}