// FNV-24.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-24 - ...Pode votar?......*\n");
    printf("***********************************************************************\n\n");

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("Voce pode votar!\n");
    else
        printf("Voce ainda nao pode votar.\n");

    return 0;
}
