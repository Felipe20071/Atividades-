// JPA-37.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                  * \n");
    printf("\n* Programa JPA-37 - Soma de Numeros ate Digitar Zero                   * \n");
    printf("\n************************************************************************ \n");

    float num, soma = 0;
    printf("\n(digite 0 para encerrar)Digite numeros: \n");
    scanf("%f", &num);
    while (num != 0) {
        soma += num;
        scanf("%f", &num);
    }
    printf("\nSoma total: %.2f\n", soma);

    return 0;
}
