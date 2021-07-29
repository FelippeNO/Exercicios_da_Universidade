#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	char gen;
	int ano, acontr, prural, idade;

	printf("O(A) contribuinte é produtor(a) rural?:\nDigite 0 para NÃO e 1 para SIM: ");
	scanf("%d", &prural);
	
	if (prural == 1){
	printf("Digite o gênero do(a) contribuinte:\nDigite 'F' para Feminino e 'M' para Masculino: ");
	scanf(" %c", &gen);
	
		switch (gen){
		case 'M':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 60) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}
			break;
		}
		case 'm':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 60) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}
			break;
		}
		case 'f':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 55) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}
			break;
		}
		case 'F':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 55) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}
			break;
		}
		default:{
			printf("Gênero inválido!");
			break;
		}
	}
	}
	else if (prural == 0){
	printf("Digite o gênero do(a) contribuinte:\nDigite 'F' para Feminino e 'M' para Masculino: ");
	scanf(" %c", &gen);
	
		switch (gen){
		case 'M':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 65) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}
			break;
		}
		case 'm':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 65) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}
			break;
		}
		case 'f':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 62) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}

			break;
		}
		case 'F':{
			printf("Digite o ano de nascimento: ");	
			scanf("%d", &ano);
			idade = 2021 - ano;
			printf("Digite o tempo de contribuição em anos: ");
			scanf("%d", &acontr);	
			
			if ((idade >= 62) && (acontr >= 15)){
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: SIM!\n");
			}
			else{
			printf("\nGênero: %c.\n", gen);
			printf("Idade: %d anos.\n", idade);
			printf("Contribuições: %d anos.\n", acontr);
			printf("Produtor Rural: %d.\n", prural);	
			printf("Direito a aposentadoria: NÃO!\n");
			}

			break;
		}
		default:{
			printf("Gênero inválido!");
			break;
		}
	}	
	}
	else{
	printf("Opção inválida!");
	}
	
	
}
