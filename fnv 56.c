// JPA-56.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-56 - Menu Fast-Food Digital (SWITCH)                    * \n");
    printf("\n************************************************************************ \n");

    int combo;
    printf("\n=== BEM-VINDO! ESCOLHA SEU COMBO ===\n");
    printf("1 - Hamburguer + Batata + Refri\n");
    printf("2 - Pizza Brotinho + Refri\n");
    printf("3 - Salada + Suco Natural\n");
    printf("4 - Balde de Frango + Molho\n");
    printf("Sua escolha: ");
    scanf("%d", &combo);

    switch (combo) {
        case 1: printf("\nCombo Hamburguer + Batata + Refri - R$ 30,00\n"); break;
        case 2: printf("\nCombo Pizza Brotinho + Refri - R$ 25,00\n"); break;
        case 3: printf("\nCombo Salada + Suco Natural - R$ 22,00\n"); break;
        case 4: printf("\nCombo Balde de Frango + Molho - R$ 35,00\n"); break;
        default: printf("\nOpcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}
