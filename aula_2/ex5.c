#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float vendas = 0.0;

    printf("Digite o valor de vendas em reais da semana ");
    scanf("%f", &vendas);

    printf("O salário da semana é: R$ %.2f", ((vendas * 0.09)  + 200));
    
    return 0;
}