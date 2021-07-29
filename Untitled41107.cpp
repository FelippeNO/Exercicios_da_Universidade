#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Selecione o tipo de vinho:\n");
	printf("1 - Vinho Tinto\n");
	printf("2 - Vinho Rose\n");
	printf("3 - Vinho Branco\n");
	printf("4 - Espumante\n");
	scanf("%d", &num1);
	
	switch (num1){
	case 1: {	   
		printf("Vinho slecionado: Tinto\n");
		printf("Selecione um dos seguintes pratos:\n");
		printf("1. Hamburguer de picanha\n");
		printf("2. Espaguete a bolonhesa\n");
		printf("3. Pizza 4 queijos\n");
		scanf("%d", &num2);
		if (num2 == 1){
			printf("Prato selecionado: Hamburguer de picanha\n");
		}
		if else (num2 == 2){
			printf("Prato selecionado: Espaguete a bolonhesa\n");
		}
		if else (num2 == 3){
			printf("Prato selecionado: Pizza 4 queijos\n");
		}
		else {
			printf("Prato inválido!");
		}
		break;
	case 2: {	   
		
		break;
	}
	case 3: {	   
		
		break;
	}
	case 4: {	   
		
		break;
	}
	case 5: {	   
		
		break;
	}
  }
}
