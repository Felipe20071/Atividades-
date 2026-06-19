// JPA-46.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-46 - Contar de 1 a 10 com DO...WHILE                    * \n");
    printf("\n************************************************************************ \n");

    int i = 1;
    printf("\nContagem:\n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
