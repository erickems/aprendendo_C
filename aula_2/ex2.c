#include<stdio.h>
#include<locale.h>
#include<Windows.h>
#include<math.h>

int main(void){
    UINT CPAGE_UTF8 = 65001; 
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float salario = 0.0;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    if(salario <= 2000.0){
        printf("\nNovo salário = %.2f", ((salario * 0.13) + salario));
    }else if(salario > 2000.0 && salario <= 4000.0){
        printf("\nNovo salário = %.2f", ((salario * 0.11) + salario));
    }else {
        printf("\nNovo salário = R$%.2f", ((salario * 0.07) + salario));
    }

    return 0;
}