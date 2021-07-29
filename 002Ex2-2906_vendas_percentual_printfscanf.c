#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");

	printf("Digite o ano que recebeu aumento de vendas: \n");
	int ano_vendas;
		scanf("%d", &ano_vendas);
		printf("Digite o ano de referência: \n");
	int ano_ref;
		scanf("%d", &ano_ref);
		printf("Digite o percentual de aumento de vendas: \n");
	int perc_vendas;
		scanf("%d", &perc_vendas);

	printf("Tivemos no ano %d um aumento de %d%% nas vendas em relação ao ano %d.", ano_vendas, perc_vendas, ano_ref);

	return 0;
	
}
