// JPA-41.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                         * \n");
    printf("\n* Programa JPA-41 - Numero Primo com WHILE                             * \n");
    printf("\n************************************************************************ \n");
 
    int num, i = 2, primo = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &num);
 
    if (num < 2) primo = 0;
 
    while (i < num && primo) {
        if (num % i == 0) primo = 0;
        i++;
    }
 
    if (primo)
        printf("\n%d e primo.\n", num);
    else
        printf("\n%d nao e primo.\n", num);
 
    return 0;
}

