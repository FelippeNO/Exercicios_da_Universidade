#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    int i = 50, n[i], t, c = 0, x;
    //entrada
    while (1)
    {
        scanf("%d", &t);
        if (t < 2 || t > 5)
        {
            printf("Valor invalido! Tente novamente\n");
        }
        else
        {
            break;
        }
    }
    x = t;
    //armazenar
    for (; c != 50; c++)
    {
        n[c] = t - x;
        x--;
        if (n[c] == t - 1)
        {
            x = t;
        }
    }
    c = 0;
    //printar
    for (; c != 50; c++)
    {
        printf("N[%d] = %d\n", c, n[c]);
    }
}
