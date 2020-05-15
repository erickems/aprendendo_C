#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int mes = 0;

    printf("Digite o número correspondente ao mês do ano ");
    scanf("%i", &mes);

    if (mes <= 7)
    {
        if (mes % 2 == 0)
        {
            if (mes == 2)
            {
                printf("O mês %i possui 29 dias", mes);
            }
            else
            {
                printf("O mês %i possui 30 dias", mes);
            }
        }
        else
        {
            printf("O mês %i possui 31 dias", mes);
        }
    }
    else
    {
        if (mes % 2 == 0)
        {
            printf("O mês %i possui 31 dias.", mes);
        }
        else
        {
            printf("O mês %i possui 30 dias.", mes);
        }
    }

    return 0;
}