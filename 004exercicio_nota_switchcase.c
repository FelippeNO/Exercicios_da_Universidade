#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	char nota;

	scanf("%c", &nota);

	switch (nota)
	{
	case 'A':
	{
		printf("Excelente! Parabens!");
		break;
	}
	case 'a':
	{
		printf("Excelente! Parabens!");
		break;
	}
	case 'B':
	{
		printf("Voce foi bem.");
		break;
	}
	case 'b':
	{
		printf("Voce foi bem.");
		break;
	}
	case 'C':
	{
		printf("Voce foi bem.");
		break;
	}
	case 'c':
	{
		printf("Voce foi bem.");
		break;
	}
	case 'D':
	{
		printf("Foi por muito pouco!");
		break;
	}
	case 'd':
	{
		printf("Foi por muito pouco!");
		break;
	}
	case 'F':
	{
		printf("Estudar mais na proxima.");
		break;
	}
	case 'f':
	{
		printf("Estudar mais na proxima.");
		break;
	}
	default:
	{
		printf("Valor invalido.");
		break;
	}
	}
}
