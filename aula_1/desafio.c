#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float peso = 0;
    float altura = 0;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    float imc = (peso/(altura*altura)); 
    // ou peso/pow(altura, 2.0)
    // mas aí para compilar seria : gcc -lm desafio.c -o desafio

    if(imc < 18.5){
        printf("Abaixo do peso");
    }
    else if(imc >= 18.5 && imc <= 24.9){
        printf("Peso normal");
    }
    else if(imc >= 25 && imc <= 29.9){
        printf("Acima do peso");
    }
    else{
        printf("Obeso");
    }

    return 0;
}