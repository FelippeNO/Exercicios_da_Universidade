#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n = -110, n2; //inicia com uma variável n abaixo do intervalo proposto
	int primeiraVez = 1;
	
	while(1){ // 1 pq repete sempre
		scanf("%d", &n2); //pede um número
		if (n2 == 0){ //se o número for 0 ele vai executar isso
			if (primeiraVez == 1){ //se for a primeira vez, ele vai validar com a variável primeiraVez. Previne o erro de digitar 0 uma primeira vez e bugar o programa.
			n = 0; //vai atribuir 0 ao número
			}
		if (n < 0){ //se q eu lançar só números negativos
			n = 0; //ele vai voltar a resposta 0. Pois o 0 é uma resposta da entrada.
		}
		break; // quebra o while e vai pra linha 27. Finalizando o código
		}		
	primeiraVez = 0; //aqui o código muda a variável primeiraVez para encerrar o loope da linha 13-14. E vai direto para a 16.
		if (n2 >= -100 && n2 <= 100){ //Analisa o variável n2. Se ela for maior maior que -100 e menor que 100.
			if (n2 > n){ //Se o n2 analisado (desde a primeira vez), for maior que o número anterior (-110, pq setamos a variável)
			n =	 n2; //Ele torna o n inicial igual o n2.
			}
		} else {
		printf("Valor invalido! Tente novamente!\n"); //Se o n2 analisado não atender à condição da linha 19. E não for 0. Ele pede um novo valor e retorna o loop.
		}
	}
	printf("%d", n); //resposta final
}

