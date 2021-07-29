#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int idade, doacoes;
	float peso;
	char sexo;
	
	printf("Por gentileza, responda as seguintes questoes:");
	printf("\nQual seu sexo('M' ou 'F')? ");
	scanf("%c", &sexo);
	printf("\nQual sua idade? ");
	scanf("%d", &idade);
	printf("\nQual seu peso? ");
	scanf("%f", &peso);
	printf("\nQuantas vezes doou sangue no ano atual? ");
	scanf("%d", &doacoes);
	
	if (idade < 18 || idade > 67){		   		
	    	printf("\nRequisito idade entre 18 e 67 anos nao cumprido!");
	     	printf(" Infelizmente voce nao pode doar sangue.");
		    return 0;		
	   }
	if (peso < 45){
			printf("\nRequisito peso maior que 45 KG nao cumprido!");
			printf(" Infelizmente voce nao pode doar sangue.");
		    return 0;
	}
	
	switch (sexo){
	case 'M': {	   
	   if (doacoes >= 4){
	   	    printf("\nQuantidade de doacoes maximas efetuadas no ano atual!");
			printf(" Infelizmente voce nao pode doar sangue.");
		    return 0;
	   }
	printf("\nParabens! Voce cumpriu todos os requisistos para realizar a doacao de sangue!");
	break;
	}
	case 'F': {
	   if (doacoes >= 3){
	   	    printf("\nQuantidade de doacoes maximas efetuadas no ano atual!");
			printf(" Infelizmente voce nao pode doar sangue.");
		    return 0;
	   }
	printf("\nParabens! Voce cumpriu todos os requisistos para realizar a doacao de sangue!");
	break;
	}	
  }
}
