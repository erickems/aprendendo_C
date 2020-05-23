#include <stdio.h>

int main(void)
{

    printf("\n%4s%15s\n", "Celsius", "Fahrenheit");
    float fahrenheit = 0;

    for (int i = 20; i <= 50; i++)
    {
        fahrenheit = ((i * 9 / 5) + 32);
        printf("%4d%15.2f\n", i, fahrenheit);
    }

    return 0;
}