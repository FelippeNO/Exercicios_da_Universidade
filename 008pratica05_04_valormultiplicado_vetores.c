#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    int i = 10, n[i], v, c = 0;
    //entrada
    while (1)
    {
        scanf("%d", &v);
        if (v < 1 || v > 50)
        {
            printf("Valor invalido! Tente novamente.\n");
        }
        else
        {
            break;
        }
    }
    //armazenar
    for (; c != 10; c++)
    {
        n[c] = v;
        v = v * 2;
    }
    c = 0;
    //printar
    for (; c != 10; c++)
    {
        printf("N[%d] = %d\n", c, n[c]);
    }
}
