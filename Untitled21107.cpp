#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float a;	
	scanf("%f", &a);

	
	if ((a >= 0) && (a <= 25)){
		printf("[0,25]");
}
	else if ((a >= 25) && (a <= 50)){
		printf("(25,50]");	
	}
	else if ((a >= 50) && (a <= 75)){
		printf("(50,75]");	
	}
	else if ((a >= 75) && (a <= 100)){
		printf("(75,100]");	
	}
	else{
		printf("Fora do intervalo");	
	}
}
