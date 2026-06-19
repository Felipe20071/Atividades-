// FNV-30.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-30 - ...Fatorial de um número...*\n");
    printf("***********************************************************************\n\n");

    int n, i;
    long long fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        fat *= i;

    printf("Fatorial de %d = %lld\n", n, fat);

    return 0;
}
