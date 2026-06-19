// JPA-34.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809              * \n");
    printf("\n* Programa JPA-34 - Verificar se um Numero e Primo (FOR)               * \n");
    printf("\n************************************************************************ \n");
 
    int i;
    int num, primo = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &num);
 
    if (num < 2) primo = 0;
 
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }
 
    if (primo)
        printf("\n%d e um numero primo.\n", num);
    else
        printf("\n%d nao e um numero primo.\n", num);
 
    return 0;
}

