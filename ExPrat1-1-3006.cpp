#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");
	float a;
	float b;
	float c;

	scanf("%f", &a);
	scanf("%f", &b);
	
	c = a - b;


	printf("%.3f", c);

	return 0;
	
}
