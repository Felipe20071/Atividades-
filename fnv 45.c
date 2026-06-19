// JPA-45.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                     * \n");
    printf("\n* Programa JPA-45 - Menu ate Escolher Sair (WHILE)                     * \n");
    printf("\n************************************************************************ \n");

    int opcao = 0;
    while (opcao != 3) {
        printf("\n=== CAIXA ELETRONICO ===\n");
        printf("1 - Ver saldo\n");
        printf("2 - Fazer saque\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) printf("\nSaldo: R$ 1000,00\n");
        else if (opcao == 2) printf("\nSaque realizado!\n");
        else if (opcao != 3) printf("\nOpcao invalida!\n");
    }
    printf("\nAte logo!\n");

    return 0;
}
