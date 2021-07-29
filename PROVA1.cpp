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
		printf("Vinho selecionado: Tinto\n");
		printf("Selecione um dos seguintes pratos:\n");
		printf("1. Hamburguer de picanha\n");
		printf("2. Espaguete a bolonhesa\n");
		printf("3. Pizza 4 queijos\n");
		scanf("%d", &num2);
		
		if (num2 == 1){
			printf("Prato selecionado: Hamburguer de picanha\n");
		}
		else if (num2 == 2){
			printf("Prato selecionado: Espaguete a bolonhesa\n");
		}
		else if (num2 == 3){
			printf("Prato selecionado: Pizza 4 queijos\n");
		}
		else {
			printf("Prato inválido!");
		}
	}
		break;
	case 2: {	   
		printf("Vinho selecionado: Rose\n");
		printf("Selecione um dos seguintes pratos:\n");
		printf("1. Lulas à dorê\n");
		printf("2. Batatas fritas com mostarda dijon\n");
		printf("3. Pastel de carne\n");
		scanf("%d", &num2);
		
		if (num2 == 1){
			printf("Prato selecionado: Lulas à dorê\n");
		}
		else if (num2 == 2){
			printf("Prato selecionado: Batatas fritas com mostarda dijon\n");
		}
		else if (num2 == 3){
			printf("Prato selecionado: Pastel de carne\n");
		}
		else {
			printf("Prato inválido!");
		}
	}
		break;
	case 3: {	   
		printf("Vinho selecionado: Branco\n");
		printf("Selecione um dos seguintes pratos:\n");
		printf("1. Peixe assado no forno\n");
		printf("2. Verduras gratinadas\n");
		printf("3. Frango assado\n");
		scanf("%d", &num2);
		
		if (num2 == 1){
			printf("Prato selecionado: Peixe assado no forno\n");
		}
		else if (num2 == 2){
			printf("Prato selecionado: Verduras gratinadas\n");
		}
		else if (num2 == 3){
			printf("Prato selecionado: Frango assado\n");
		}
		else {
			printf("Prato inválido!");
		}
	}
		break;
	case 4: {	   
		printf("Vinho selecionado: Espumante\n");
		printf("Selecione um dos seguintes pratos:\n");
		printf("1. Frutos do mar grelhados\n");
		printf("2. Feijoada\n");
		printf("3. Espaguete ao molho sugo\n");
		scanf("%d", &num2);
		
		if (num2 == 1){
			printf("Prato selecionado: Frutos do mar grelhados\n");
		}
		else if (num2 == 2){
			printf("Prato selecionado: Feijoada\n");
		}
		else if (num2 == 3){
			printf("Prato selecionado: Espaguete ao molho sugo\n");
		}
		else {
			printf("Prato inválido!");
		}
	}
		break;
	default: {	   
		printf("Vinho inválido!");
		break;
	}
  }
}
