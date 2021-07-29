#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	if ((a > b) && (a > c) && (a > d)){
		printf("%d", a);
}
	else if ((b > a) && (b > c) && (b > d)){
		printf("%d", b);	
	}
	else if ((c > a) && (c > b) && (c > d)){
		printf("%d", c);	
	}
	else if ((d > a) && (d > b) && (d > c)){
		printf("%d", d);	
	}
	else{
		printf("%d", a);	
	}
}
