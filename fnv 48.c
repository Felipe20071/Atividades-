// JPA-48.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-48 - Menu com Opcao de Sair (DO...WHILE)                * \n");
    printf("\n************************************************************************ \n");

    int opcao;
    do {
        printf("\n1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1)
            printf("\nVoce escolheu a mensagem!\n");
        else if (opcao != 2)
            printf("\nOpcao invalida!\n");
    } while (opcao != 2);

    printf("\nSaindo...\n");
    return 0;
}
