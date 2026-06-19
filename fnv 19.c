// FNV-19.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-19 - ...Ordem crescente (três números)...*\n");
    printf("***********************************************************************\n\n");

    float num1, num2, num3, tmp;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 > num2) { tmp = num1; num1 = num2; num2 = tmp; }
    if (num2 > num3) { tmp = num2; num2 = num3; num3 = tmp; }
    if (num1 > num2) { tmp = num1; num1 = num2; num2 = tmp; }

    printf("Ordem crescente: %.1f %.1f %.1f\n", num1, num2, num3);

    return 0;
}
