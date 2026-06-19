// JPA-36.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA 0027809                    * \n");
    printf("\n* Programa JPA-36 - Contar de 1 a 10 com WHILE                         * \n");
    printf("\n************************************************************************ \n");
 
    int i = 1;
    printf("\nContagem:\n");
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
 
    return 0;
}

