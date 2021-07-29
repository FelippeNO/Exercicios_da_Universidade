#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int cont;
	//for sempre vai testar e depois incrementar e depois testar e depois incrementar
	for (cont = 0; cont < 50; cont++){ //primeira vez: inicia, testa, executa, depois incrementa/decrementa.
		printf("cont = %d\n", cont); //ele sempre incrementa e depois testa.
}
printf("FIM");
}


