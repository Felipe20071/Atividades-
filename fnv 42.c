// JPA-42.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-42 - Quantidade de Numeros Impares Digitados             * \n");
    printf("\n************************************************************************ \n");

    int num, cont = 0, impares = 0;
    printf("\nDigite 10 numeros:\n");

    while (cont < 10) {
        scanf("%d", &num);
        if (num % 2 != 0) impares++;
        cont++;
    }
    printf("\nQuantidade de numeros impares: %d\n", impares);

    return 0;
}
