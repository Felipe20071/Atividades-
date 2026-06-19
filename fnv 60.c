// JPA-60.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-60 - Validador de Dias Uteis (SWITCH)                   * \n");
    printf("\n************************************************************************ \n");

    int dia;
    printf("\nDigite o dia da semana (1=Dom, 2=Seg, ..., 7=Sab): ");
    scanf("%d", &dia);

    switch (dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("\nDia Util. Acesso liberado para o trabalho.\n"); break;
        case 1:
        case 7:
            printf("\nFim de Semana. Predio fechado.\n"); break;
        default:
            printf("\nNumero de dia invalido.\n");
    }

    return 0;
}
