// JPA-59.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-59 - Assistente de Direcao do Robo (SWITCH)             * \n");
    printf("\n************************************************************************ \n");

    char dir;
    printf("\nDigite a direcao (N/S/L/O): ");
    scanf(" %c", &dir);

    switch (dir) {
        case'N':
		case'n': printf("\nSeguir para o Norte.\n"); break;
        case'S':
		case's': printf("\nSeguir para o Sul.\n"); break;
        case'L':
		case'l': printf("\nVirar a Leste (Direita).\n"); break;
        case'O':
		case'o': printf("\nVirar a Oeste (Esquerda).\n"); break;
        default:  printf("\nComando invalido! Pare o robo.\n");
    }

    return 0;
}
