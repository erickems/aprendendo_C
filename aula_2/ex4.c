#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>
#include <string.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero = 0;

    printf("Digite o número inteiro de 5 dígitos: ");
    scanf("%d", &numero);

    int unidade = numero % 10;
    int dezena = (numero % 100) / 10;
    int milhar = (numero % 1000) / 100;
    int dezenaMilhar = (numero % 10000) / 1000;
    int centenaMilhar = (numero % 100000) / 10000;

    printf("%d   %d   %d   %d   %d", centenaMilhar, dezenaMilhar, milhar, dezena, unidade);

    return 0;
}