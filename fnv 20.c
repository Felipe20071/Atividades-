// FNV-20.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-20 - ...Ano bissexto...*\n");
    printf("***********************************************************************\n\n");

    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        printf("%d e bissexto (366 dias).\n", ano);
    else
        printf("%d nao e bissexto (365 dias).\n", ano);

    return 0;
}
