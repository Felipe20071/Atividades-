// FNV-27.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-27 - ...Tabuada de um número...*\n");
    printf("***********************************************************************\n\n");

    int n, i;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
