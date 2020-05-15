#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num1 = 5;
    int num2 = 8;
    int num3 = 9;
    int produto;
    produto = num1 * num2 * num3;
    printf("O produto dos números inteiros %d, %d e %d é: %d", num1, num2, num3, produto);
    return 0;
}