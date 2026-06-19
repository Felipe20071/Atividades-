// JPA-39.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-39 - Verificar se Numero e Positivo (WHILE)             * \n");
    printf("\n************************************************************************ \n");

    float num;
    printf("\nDigite um numero positivo: ");
    scanf("%f", &num);

    while (num <= 0) {
        printf("Numero invalido!\nDigite um numero positivo: ");
        scanf("%f", &num);
    }
    printf("\nNumero aceito: %.2f\n", num);

    return 0;
}
