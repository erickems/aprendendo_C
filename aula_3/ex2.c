#include <stdio.h>
#include <math.h>

// Escreva um programa que soma os n primeiros números ímpar, n dado. Por exemplo, se for fornecido para n o valor 6, o programa deve retornar 36, pois 1 + 3 + 5 + 7 + 9 + 11 = 36. Sugestão: use um loop for.

int main(void)
{

    int soma = 0;
    int condicaoParada = 0;
    int contador = 0;
    int numero = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (condicaoParada != abs(numero))
    {
        contador++;

        if (contador % 2 != 0)
        {
            soma += contador;
            condicaoParada++;
        }
    }
    printf("%d", soma);

    return 0;
}