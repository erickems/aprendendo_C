#include <stdio.h>

// Escreva um programa que determina o menor divisor próprio de um inteiro. Sugestão: use um loop while.

int main(void)
{

    int numero = 0;
    int divisor = 1;
    int flag = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (flag != 1)
    {
        divisor++;

        if (numero % divisor == 0)
        {
            flag = 1;
        }
    }

    printf("O menor divisor próprio de %d é %d", numero, divisor);

    return 0;
}