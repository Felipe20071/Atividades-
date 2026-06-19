// JPA-43.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                               * \n");
    printf("\n* Programa JPA-43 - Soma dos Pares entre 1 e 100 (WHILE)               * \n");
    printf("\n************************************************************************ \n");

    int i = 2, soma = 0;
    while (i <= 100) {
        soma += i;
        i += 2;
    }
    printf("\nSoma dos numeros pares entre 1 e 100: %d\n", soma);

    return 0;
}
