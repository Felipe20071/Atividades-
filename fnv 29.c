// FNV-29.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-29 - ...Números pares de 0 a 50...*\n");
    printf("***********************************************************************\n\n");

    int i;
    printf("Numeros pares de 0 a 50:\n");
    for (i = 0; i <= 50; i += 2)
        printf("%d\n", i);

    return 0;
}
