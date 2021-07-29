
#include <stdio.h>



int main(){

	int n1, n2, lados;

	printf("Informe o tamanho do lado do quadrado: ");

	scanf("%d", &lados);

	for(n1=1; n1<=lados; n1++){

		for(n2=1; n2<lados; n2++){

			printf("x ");

		}

		printf("x\n");

	}

}


