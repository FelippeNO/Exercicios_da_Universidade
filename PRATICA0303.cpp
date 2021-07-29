#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, vezes, p, i;	
	do{
		scanf("%d", &n);
		if((n < 1) || (n > 30))
		printf("Valor inválido! Tente novamente.\n");
	}	while ((n < 1) || (n > 30));
	vezes = 1;
	while (p < 300) {
		printf("%d", n);
	p = n;
	i = 1;
	while(i<vezes) {
		p = p * 3;
		printf(" * 3");
		i++;
	}
	printf(" = %d\n", p);
	vezes++;
	}
	}
