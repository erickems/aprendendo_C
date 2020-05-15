#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float num = 0.0;

    printf("Digite o valor a ser arredondado ");
    scanf("%f", &num);
    
    int inteiro = (int)num;
    float decimal = num - inteiro;

    if(decimal >= 0.5){
        printf("%.f", ceil(num));
    } else {
        printf("%.f", floor(num));
    }

    return 0;
}