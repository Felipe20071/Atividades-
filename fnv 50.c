// JPA-50.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-50 - Numero Positivo Obrigatorio (DO...WHILE)           * \n");
    printf("\n************************************************************************ \n");

    float valor;
    do {
        printf("\nDigite um valor positivo para deposito: ");
        scanf("%f", &valor);
        if (valor <= 0)
            printf("Valor invalido! Insira um valor maior que zero.\n");
    } while (valor <= 0);

    printf("\nDeposito de R$ %.2f realizado com sucesso!\n", valor);
    return 0;
}
