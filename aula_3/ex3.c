#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

// Sem usar o operador de módulo (%), escreva um programa que determina o quociente e o resto da divisão entre dois inteiros positivos. Sugestão: use um loop while.

int main(void)
{

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int dividendo = 0;
    int divisor = 0;
    int quociente = 0;
    int resto = 0;

    printf("Digite o dividendo e o divisor: ");
    scanf("%d %d", &dividendo, &divisor);

    while (dividendo > 0)
    {
        dividendo = dividendo - divisor;
        if (dividendo >= 0)
        {
            quociente++;
        }
        else
        {
            resto = dividendo + divisor;
        }
    }

    printf("o quociente é %i e o resto é %i", quociente, resto);

    return 0;
}