// JPA-53.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-53 - Confirmar Saida com 's'                            * \n");
    printf("\n************************************************************************ \n");
    
    
    int opcao;
    char resp;
    do {
        printf("\n=== MENU DE CADASTRO ===\n");
        printf("1 - Cadastro\n");
        printf("2 - Consulta\n");
        printf("3 - Exclusao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\nVoce escolheu a opcao %d\n", opcao);
        printf("\nOperacao realizada com sucesso!\n");
        printf("Deseja sair? (s para sair): ");
        scanf(" %c", &resp);
    } while (resp != 's');

    printf("\nSistema encerrado. Ate logo!\n");
    return 0;
}
