#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>
#include <string.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char entrada[6];

    printf("Digite o número ");
    fgets(entrada, 6, stdin);

    char str[17];
    str[0] = entrada[0];
    str[1] = '   ';
    str[2] = '   ';
    str[3] = '   ';
    str[4] = entrada[1];
    str[5] = '   ';
    str[6] = '   ';
    str[7] = '   ';
    str[8] = entrada[2];
    str[9] = '   ';
    str[10] = '   ';
    str[11] = '   ';
    str[12] = entrada[3];
    str[13] = '   ';
    str[14] = '   ';
    str[15] = '   ';
    str[16] = entrada[4];

    int i;
    for (i = 0; i < 17; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}