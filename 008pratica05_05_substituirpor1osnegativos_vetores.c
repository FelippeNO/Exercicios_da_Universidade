#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    int a[10], x = 0;
    //entrada
    for (; x != 10; x++)
    {
        scanf("%d", &a[x]);
        if (a[x] <= 0)
        {
            a[x] = 1;
        }
    }
    //printar
    x = 0;
    for (; x != 10; x++)
    {
        printf("X[%d] = %d\n", x, a[x]);
    }
}
