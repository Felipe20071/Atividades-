// JPA-44.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                               * \n");
    printf("\n* Programa JPA-44 - Contar Digitos de um Numero                        * \n");
    printf("\n************************************************************************ \n");

    long long num;
    int digitos = 0;
    printf("\nDigite um numero positivo: ");
    scanf("%lld", &num);

    long long temp = num;
    if (temp == 0) digitos = 1;
    while (temp > 0) {
        temp /= 10;
        digitos++;
    }
    printf("\nO numero %lld possui %d digito(s).\n", num, digitos);

    return 0;
}
