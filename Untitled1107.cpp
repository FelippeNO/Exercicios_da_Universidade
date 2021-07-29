#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	if ((b > c) && (d > a) && ((c+d) > (a + b)) && (c > 0) && (d > 0) && (a % 2 == 0)){
		printf("Valores aceitos");
}
	else{
		printf("Valores nao aceitos");	
	}
}
