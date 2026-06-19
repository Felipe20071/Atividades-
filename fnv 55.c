// JPA-55.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-55 - Maior Numero ate Digitar Negativo                  * \n");
    printf("\n************************************************************************ \n");

    float num, maior = -1;
    printf("\nDigite uma nota para a escola(negativo para encerrar):\n");

    do {
        scanf("%f", &num);
        if (num >= 0 && num > maior)
            maior = num;
    } while (num >= 0);

    if (maior >= 0)
        printf("\nA maiorn nota digitada foi: %.2f\n", maior);
    else
        printf("\nNenhum numero positivo foi digitado.\n");

    return 0;
}
