#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int telefone, local, moradia, dinheiro, trabalho, resultado;
	
	printf("Responda às seguintes Perguntas com 1 para SIM e 0 para NÃO\n");
	printf("Você telefonou para a vítima? ");
	scanf("%d", &telefone);
	printf("Você esteve no local do crime? ");
	scanf("%d", &local);
	printf("Você mora perto da vítima? ");
	scanf("%d", &moradia);
	printf("Você devia dinheiro para a vítima? ");
	scanf("%d", &dinheiro);
	printf("Você já trabalhou com a vítima? ");
	scanf("%d", &trabalho);
	
	resultado = telefone + local + moradia + dinheiro + trabalho;
	
{

	if (resultado >= 0 && resultado <= 1)
	{
		printf("\nA pessoa é inocente!");	
	}

	else if (resultado == 2)
	{
		printf("\nA pessoa é suspeita!");	
	}
	
	else if (resultado >= 3 && resultado <= 4)
	{
		printf("\nA pessoa é cúmplice!");	
	}

	else if (resultado == 5)
	{
		printf("\nA pessoa é assassina!");	
	}	
		
}
}
	
