#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int soma = 0, n = 300;
for(n ; n >= 30; n = n - 3){
	if (n%3==0){
		soma += n;}
}
		printf("%d\n", soma);
}
