#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
char texto[100];
int i = 0, x = 0, chave = 0;
scanf(" %[^\n]s", texto);
x = strlen(texto);
for (; i != x; i++){
	if ((texto[i] == '$') && (chave == 0)){
	texto[i+1] = '*';
	chave = 1;
	}
	else if (texto [i-1] == '*'){
		if ((texto[i] >= 44) && (texto[i] <= 97)){
		texto[i]='*';	
		}
		else{
		}
	}
	else{
	}
chave = 0;
}
printf ("%s\n", texto);
}
