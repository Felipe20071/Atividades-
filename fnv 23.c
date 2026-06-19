// FNV-23.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-23 - ...Maior de dois números...*\n");
    printf("***********************************************************************\n\n");

    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("O maior numero e: %d\n", num1);
    else if (num2 > num1)
        printf("O maior numero e: %d\n", num2);
    else
        printf("Os numeros sao iguais.\n");

    return 0;
}
