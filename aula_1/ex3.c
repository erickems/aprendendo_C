#include<locale.h>
#include<Windows.h>
#include<stdio.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num = 0;

    printf("Digite um inteiro: ");
    scanf("%d", &num);

    printf("O algarismo da casa das unidades é: %d", (num%10));
    
    return 0;
}