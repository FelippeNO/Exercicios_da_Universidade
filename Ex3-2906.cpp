#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");

	int hora;
		scanf("%d", &hora);
	int minuto;
		scanf("%d", &minuto);
	int decorrido;
	decorrido = (hora * 60) + minuto;
	


	printf("Passaram %d minutos.", decorrido);

	return 0;
	
}
