#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, div, cont = 0, inicial = -1;
	//for sempre vai testar e depois incrementar e depois testar e depois incrementar
for(n = 0; n <= 9; n = n+1){
	scanf("%d", &div);
	if (div > inicial){
		inicial = div;
		cont = n+1;
	}
	else{
		inicial = inicial;
	}
}
printf("%d\n%d\n", inicial, cont);
}
