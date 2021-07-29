#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, n1;
	do{ //faz
		scanf("%d", &n); //digitar o numero
		if((n <= 2 ) || (n >= 1000)){ // se o número estiver nesse intervalo
		printf("Valor invalido! Tente novamente!\n"); //printa valor inválido
		}
	} while (!((n > 2) && (n < 1000))); //repete até não satisfazer, se satisfazer
	n1 = 1; //a minha varíavel é =1
	while (n1 != 11) { //repete até que minha variável seja igual 11
	printf("%d X %d = %d\n", n1, n, n1*n); //eu printo isso aqui.
	n1 = n1 + 1; //logo depois eu atribuo à minha variável + 1
	}
	}

