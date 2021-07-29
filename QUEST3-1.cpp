#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n, n1;
	do //faz
	{
		scanf("%d", &n);			 //digitar o numero
		if ((n <= 5) || (n >= 2000)) // se o numero estiver nesse intervalo
		{
			printf("Valor invalido! Tente novamente!\n"); //printa valor invalido
		}
	} while (!((n > 5) && (n < 2000))); //repete até não satisfazer, se satisfazer
	n1 = 2;								//a minha variavel n1 =2
	while (n1 <= n)						//enqnto o meu numero for maior que a variavel q eu setei
	{
		printf("%d^2 = %d\n", n1, n1 * n1); //eu printo isso aqui.
		n1 = n1 + 2;						//logo depois eu atribuo n1 minha variável + 2
	}
}
