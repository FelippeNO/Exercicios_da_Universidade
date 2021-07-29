#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int volAgua;
	float tafAgua, totAgua, tafEsg, totEsg, totAgEsg, tafFed, tributFed, valor;
	
	printf("Digite o valor inteiro de água consumida, em m3:\n");
	scanf("%d", &volAgua);
	printf("Digite o valor da tarifa de água por m3, em R$:\n");
	scanf("%f", &tafAgua);
	printf("Digite o percentual da tarifa de esgoto cobrado:\n");
	scanf("%f", &tafEsg);
	printf("Digite o percentual de tributos federais:\n");
	scanf("%f", &tafFed);
	
	totAgua = volAgua * tafAgua;
	totEsg = totAgua * (tafEsg / 100);
	totAgEsg = totAgua + totEsg;
	tributFed = totAgEsg * (tafFed / 100);
	valor = totAgEsg + tributFed;
	
	printf("-------------------\n");
	printf("Total Água: R$%.2f\n", totAgua);
	printf("Total Esgoto: R$%.2f\n", totEsg);
	printf("Total: R$%.2f\n", totAgEsg);
	printf("Tributos Federais: R$%.2f\n", tributFed);
	printf("\nValor da Fatura: R$%.2f\n", valor);
}
	
	
