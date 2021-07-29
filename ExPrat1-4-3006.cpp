#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
		setlocale(LC_ALL, "Portuguese");
	float percValidos, percBrancos, percNulos, nEleitores, qVBrancos, qVNulos;
	int qVValidos;

	scanf("%f", &nEleitores);
	scanf("%f", &qVBrancos);
	scanf("%f", &qVNulos);

	qVValidos = nEleitores - qVBrancos - qVNulos;
	percValidos = (qVValidos / nEleitores) * 100;
	percBrancos = (qVBrancos / nEleitores) * 100;
	percNulos = (qVNulos / nEleitores) * 100;

	printf("Total de votos validos: %d\n----------------------------\nVotos validos: %.2f%%\nVotos brancos: %.2f%%\nVotos nulos: %.2f%%", qVValidos, percValidos, percBrancos, percNulos);

	return 0;
	
}
