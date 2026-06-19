// JPA-40.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieria - RA  0027809                      * \n");
    printf("\n* Programa JPA-40 - Tabuada com WHILE                                  * \n");
    printf("\n************************************************************************ \n");

    int num, i = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
