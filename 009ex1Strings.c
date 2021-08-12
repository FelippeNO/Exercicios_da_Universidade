#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
char texto[1024], textoCont[1024];
int i = 0, x = 0;
scanf(" %[^\n]s", texto);
x = strlen(texto);
textoCont[x]='\0';
for (; i != x; i++){
	textoCont[x-1-i] = texto[i];
}
printf ("%s", textoCont);
}
