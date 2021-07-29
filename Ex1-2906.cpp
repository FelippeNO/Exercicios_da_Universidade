#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");
	int ano_vendas;
	int ano_ref;
	int perc_vendas;
	
	scanf("%d", &ano_vendas);
	scanf("%d", &ano_ref);
	scanf("%d", &perc_vendas);

	printf("Tivemos no ano %d um aumento de %d pontos percentuais nas vendas em relação ao ano %d.\nTivemos no ano %d um aumento de %d%% nas vendas em relação ao ano %d.", ano_vendas, perc_vendas, ano_ref, ano_vendas, perc_vendas, ano_ref);

	return 0;
	
}
