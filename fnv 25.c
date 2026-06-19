// FNV-25.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-25 - ...Notas e aprovação...*\n");
    printf("***********************************************************************\n\n");

    float media;
    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 6.0)
        printf("Aprovado!\n");
    else if (media >= 5.0)
        printf("Em recuperacao.\n");
    else
        printf("Reprovado.\n");

    return 0;
}
