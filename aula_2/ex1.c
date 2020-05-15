#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int a = 1;
    int b = -1;
    int c = -2;

    printf("Digite os 3 coeficientes (todo inteiros): ");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    int delta = sqrt((b * b) - (4 * a * c));
    int x1 = (-b + delta) / (2 * a);
    int x2 = (-b - delta) / (2 * a);

    if (delta > 0)
    {
        printf("Há duas raízes reais e distintas");
        printf("\n%i", x1);
        printf("\n%i", x2);
    }
    else if (delta < 0)
    {
        printf("Não há raizes");
    }
    else
    {
        printf("Há apenas uma raíz");
        printf("\n%i", x1);
    }

    return 0;
}