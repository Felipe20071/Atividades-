// JPA-49.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-49 - Pedir Senha ate Acertar (DO...WHILE)               * \n");
    printf("\n************************************************************************ \n");

    int senha;
    do {
        printf("\nDigite a senha: ");
        scanf("%d", &senha);
        if (senha != 1111)
            printf("Senha incorreta! Tente novamente.\n");
    } while (senha != 1111);

    printf("\nAcesso liberado!\n");
    return 0;
}
