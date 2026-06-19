// FNV-26.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-26 - ...Contar de 1 a 10...*\n");
    printf("***********************************************************************\n\n");

    int i;
    for (i = 1; i <= 10; i++)
        printf("%d\n", i);

    return 0;
}
