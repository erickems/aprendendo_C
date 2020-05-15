#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float a, b, c = 0;

    printf("Digite os lados do triângulo: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        if (a == b && b == c)
        {
            printf("Triângulo equilátero");
        }
        else if (a != b && b != c)
        {
            printf("Triângulo escaleno");
        }
        else if (a == c || a == b || b == c)
        {
            printf("Triângulo isósceles");
        }
        else if (a * a == b * b * + c * c || b * b == c * c * +a * a || c * c == a * a + b * b)
        {
            printf("Triângulo retângulo");
        }
    } else
    {
        printf("Um lado não pode ser maior que a soma dos outros dois.");
    }

    return 0;
}