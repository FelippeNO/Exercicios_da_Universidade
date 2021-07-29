#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	float a;
	float b;
	float c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	float soma = a + b + c;
	float media = soma / 3;
	printf("Media = ");
	printf("%.2f", media);
	
}
