#include <stdio.h>

int main(void)
{

    printf("\n%s\n", "Números primos entre 0 e 100:");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}