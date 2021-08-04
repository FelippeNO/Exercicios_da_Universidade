#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{

    int a[10];
    int c = 10, i = 9, x = 0;

    //entrada
    for (; x != 10; x++)
    {
        scanf("%d", &a[x]);
    }

    while (c != 0) //continua até não satisfazer a condição
    {
        if (a[i] >= 10)
        {
            printf("A[%d] = %d\n", i, a[i]);
        }
        i--;
        c--;
    }
}
