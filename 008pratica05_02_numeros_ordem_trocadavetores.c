#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    int a[20], i, x;
    i = 20;
    x = 0;
    //entrada
    for (; x < 20; x++)
    {
        scanf("%d", &a[x]);
    }
    for (; i != 0; i--)
    {
        printf("%d\n", a[i - 1]);
    }
}
