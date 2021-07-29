#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, n1, n2, n3=1, cont;
scanf("%d", &n);
if(n>=2 && n<=30){
	for(cont=1;cont<=n; cont++){
	n1=n2;
	n2=n3;
	printf("%d\n", n3);
	n3=n1+n2;
	}
}
}
