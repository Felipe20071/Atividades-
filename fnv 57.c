// JPA-57.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-57 - Central do Brinquedo Eletronico (SWITCH)           * \n");
    printf("\n************************************************************************ \n");

    char cor[20];
    printf("\nDigite a cor que acendeu (Verde/Amarelo/Vermelho): ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0)
        printf("\nO urso diz: \"Vamos brincar la fora!\"\n");
    else if (strcmp(cor, "Amarelo") == 0)
        printf("\nO urso diz: \"Estou ficando com soninho...\"\n");
    else if (strcmp(cor, "Vermelho") == 0)
        printf("\nO urso diz: \"Estou com fome, hora do lanche!\"\n");
    else
        printf("\nCor desconhecida. O urso pisca as luzes.\n");

    return 0;
}
