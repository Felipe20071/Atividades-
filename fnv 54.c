// JPA-54.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-54 - Validar Numero entre 1 e 5                         * \n");
    printf("\n************************************************************************ \n");

    int nivel;
    do {
        printf("\nEscolha o nivel de dificuldade (1 a 5): ");
        scanf("%d", &nivel);
        if (nivel < 1 || nivel > 5)
            printf("Nivel invalido! Escolha entre 1 e 5.\n");
    } while (nivel < 1 || nivel > 5);

    printf("\nNivel %d selecionado!\n", nivel);
    return 0;
}
