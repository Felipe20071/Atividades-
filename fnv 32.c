#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA 0027809          * \n");
    printf("\n* Programa JPA-32 - Quadrado dos Numeros de 1 a 10              * \n");
    printf("\n************************************************************************ \n");
    
    int i;
 
    printf("\nNumero | Quadrado\n");
    printf("\n");
    for (i = 1; i <= 10; i++) {
        printf("%d          %d\n", i, i * i);
    }
 
    return 0;
}

