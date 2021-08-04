#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    int n = 10, n2 = 5, x[n], y[n2], yv = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        y[yv] = x[0];
        yv = yv + 2;
    }
    for (int i2 = 0; i2 < n2; i2++)
    {
        printf("%d\n", y[i2]);
    }
}
