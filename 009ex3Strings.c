#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
char texto[1024], texto2[1024];
int i = 0, x = 0, f = 0;
scanf(" %[^\n]s", texto);
x = strlen(texto);

for (; i != x; i++){
	if (texto[i] >= 49 && texto[i] <= 57){
	texto2[f] = texto[i];
	f++;
	}
	else{
	}
}
texto2[f+1]='\0';
printf ("%s\n", texto2);
}
