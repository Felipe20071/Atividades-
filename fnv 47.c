// JPA-47.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-47 - Tabuada com DO...WHILE                             * \n");
    printf("\n************************************************************************ \n");

    int num, i = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num);
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

    return 0;
}
