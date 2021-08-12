#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
char texto[1024];
int i = 0, x = 0, c = 0, v = 0;
scanf(" %[^\n]s", texto);
x = strlen(texto);

for (; i != x; i++){
	if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i'|| texto[i] == 'o'|| texto[i] == 'u'|| texto[i] == 'A'|| texto[i] == 'E'|| texto[i] == 'I'|| texto[i] == 'O'|| texto[i] == 'U'){
	v++;}
	else{
	c++;}
}


printf ("%d\n", c);
printf ("%d\n", v);
}
