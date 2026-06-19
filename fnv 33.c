// JPA-33.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
    
    
 
    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809        * \n");
    printf("\n* Programa JPA-33 - Multiplos de 3 entre 1 e 30                        * \n");
    printf("\n************************************************************************ \n");
    
	int i;
 
    printf("\nMultiplos de 3 entre 1 e 30:\n");
    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0)
            printf("%d\n", i);
    }
 
    return 0;
}

