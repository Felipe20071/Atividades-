// FNV-22.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-22 - ...Par ou ímpar...*\n");
    printf("***********************************************************************\n\n");

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d e par.\n", n);
    else
        printf("%d e impar.\n", n);

    return 0;
}
