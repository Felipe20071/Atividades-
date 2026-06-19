// FNV-16.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-16 - ...Múltiplo de 3 e/ou 5...*\n");
    printf("***********************************************************************\n\n");

    int n;
    printf("Digite o numero do pedido: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("Parabens! Voce ganhou um refrigerante e uma sobremesa!\n");
    else if (n % 3 == 0)
        printf("Parabens! Voce ganhou um refrigerante!\n");
    else if (n % 5 == 0)
        printf("Parabens! Voce ganhou uma sobremesa!\n");
    else
        printf("Nenhum premio desta vez.\n");

    return 0;
}
