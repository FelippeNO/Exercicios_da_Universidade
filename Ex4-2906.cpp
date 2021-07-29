#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");

	int qtdPassageiros;
		scanf("%d", &qtdPassageiros);
	float pesoBag;
		scanf("%f", &pesoBag);
	float distancia;
		scanf("%f", &distancia);

	float consumoCombustivel;
	consumoCombustivel = ((qtdPassageiros*0.03) + (pesoBag*0.89)) *  (0.017*distancia);
	


	printf("O consumo estimado de combustível é de %.2f litros de querosene", consumoCombustivel);

	return 0;
	
}
