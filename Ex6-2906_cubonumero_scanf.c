#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");

	int numero;
		scanf("%d", &numero);
			int numero3 = numero * numero * numero;

	printf("%d", numero3);



	return 0;
	
}
