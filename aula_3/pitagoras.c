#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

// Um triângulo retângulo pode ter lados que são todos inteiros. O conjunto de três valores inteiros para os lados do triângulo retângulo é chamado de tripla pitagórica. Esses três lados devem ter um relacionamento de forma que o quadrado de dois dos lados é igual ao quadrado da hipotenusa. Encontre todos as triplas para lado1, lado2 e hipotenusa todos menores que 500. Um tripla desse conjunto, por exemplo, é 3, 4, 5. Esse é um exemplo de computação por força-bruta.

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int lado1;
    int lado2;
    int lado3;

    for(lado1 = 1; lado1 <= 500; lado1++){
        for(lado2 = 1; lado2 <= 500; lado2++){
            for(lado3 = 1; lado3 <= 500; lado3++){
                if(lado3 * lado3 == lado1 * lado1 + lado2 * lado2){
                    printf("%d %d %d\n", lado1, lado2, lado3);
                }
            }

        }
    }

    return 0;
}