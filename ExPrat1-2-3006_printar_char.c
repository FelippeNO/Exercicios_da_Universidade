#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");
	char a;

	scanf("%c", &a);

	printf("%c %c", a, a);

	return 0;
	
}
