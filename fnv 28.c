// FNV-28.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-28 - ...Soma dos 100 primeiros números naturais...*\n");
    printf("***********************************************************************\n\n");

    int i, soma = 0;
    for (i = 1; i <= 100; i++)
        soma += i;
    printf("Soma de 1 a 100: %d\n", soma);

    return 0;
}
