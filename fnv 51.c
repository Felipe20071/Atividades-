// JPA-51.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-51 - Contagem Regressiva (DO...WHILE)                   * \n");
    printf("\n************************************************************************ \n");

    int i = 10;
    printf("\nContagem regressiva:\n");
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);
    printf("JA!\n");

    return 0;
}
