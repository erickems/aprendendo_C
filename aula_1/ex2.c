#include<locale.h>
#include<Windows.h>
#include<stdio.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Digite três números diferentes: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("A soma é %d\n", num1 + num2 + num3);
    printf("A média é %d\n", (num1 + num2 + num3) / 3);
    printf("O produto é %d\n", num1 * num2 * num3);

    if(num1 < num2 && num2 < num3){
        printf("O menor é %d\n", num1);
        printf("O maior é %d", num3);
    }
    else if(num1 < num3 && num3 < num2){
        printf("O menor é %d\n", num1);
        printf("O maior é %d", num2);
    }
    else if(num2 < num3 && num3 < num1){
        printf("O menor é %d\n", num2);
        printf("O maior é %d", num1);
    }
    else if(num2 < num1 && num1 < num3){
        printf("O menor é %d\n", num2);
        printf("O maior é %d", num3);
    }
    else if(num3 < num2 && num2 < num1){
        printf("O menor é %d\n", num3);
        printf("O maior é %d", num1);
    }

    return 0;
}