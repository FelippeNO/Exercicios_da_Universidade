#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");
	int kWh;
	double tarifa, taxas_impostos, servicos, total;

	scanf("%d", &kWh);
	scanf("%lf%lf%lf", &tarifa, &taxas_impostos, &servicos);

	total = (kWh * tarifa) + taxas_impostos + servicos;

	printf("Dados do faturamento:\n");
	printf("Consumo............:%d kWh\n", kWh);
	printf("Tarifa (R$)........:%.3lf\n", tarifa);
	printf("Total (R$).........:%.2lf\n", tarifa * kWh);
	printf("Taxas e impostos...:%.2lf\n", taxas_impostos);
	printf("Serviços...........:%.2lf\n", servicos);
	printf("VALOR (R$).........:%.2lf", total);

	return 0;
	
}
