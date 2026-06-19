// JPA-52.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-52 - Soma ate Numero Multiplo de 10                     * \n");
    printf("\n************************************************************************ \n");

    int num, soma = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;
    } while (num % 10 != 0);

    printf("\nSoma total: %d\n", soma);
    return 0;
}
