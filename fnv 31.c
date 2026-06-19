#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA 0027809                            * \n");
    printf("\n* Programa JPA-31 - Contagem Regressiva                                * \n");
    printf("\n************************************************************************ \n");
    
    int i;
 
    printf("\nContagem regressiva:\n");
    for (i= 10; i >= 1; i--) {
        printf("%d", i);
        getchar();
    }
    printf("JA!\n");
 
    return 0;
}

