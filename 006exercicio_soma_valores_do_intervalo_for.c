#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, n3, n4, soma = 0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if (n2 > n1)
    {
        for (; n1 <= n2; n1 = n1 + 1)
        {
            printf("%d ", n1);
            soma += n1;
        }
        printf("\nSoma = %d", soma);
    }
    else
    {
        n3 = n2;
        n4 = n1;
        for (; n3 <= n4; n3 = n3 + 1)
        {
            printf("%d ", n3);
            soma += n3;
        }
        printf("\nSoma = %d", soma);
    }
}
