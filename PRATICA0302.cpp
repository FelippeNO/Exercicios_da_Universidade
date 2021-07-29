#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int numero, soma, numero0 = 0;	
	do {
		scanf("%d", &numero);
		if (numero >= -100 && numero <= 100){
			soma += numero;}
		else{
		printf("Valor inválido! Tente Novamente\n");}
	}
while (numero != numero0);
printf("%d", soma);
}
