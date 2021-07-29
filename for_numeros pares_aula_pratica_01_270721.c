#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, div;
	//for sempre vai testar e depois incrementar e depois testar e depois incrementar
scanf("%d", &div);
for(n = 2; n <= div; n=n+2){
	printf("%d\n", n);
}
}
