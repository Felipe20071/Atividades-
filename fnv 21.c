// FNV-21.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-21 -.......Número positivo ou negativo......*\n");
    printf("***********************************************************************\n\n");

    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0)
        printf("(numero positivo).\n");
    else if (n < 0)
        printf("(numero negativo).\n");
    else
        printf("(zero).\n");

    return 0;
}
