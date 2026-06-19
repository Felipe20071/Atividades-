// JPA-58.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                                      * \n");
    printf("\n* Programa JPA-58 - Calculadora de Bolso 4 Operacoes (SWITCH)          * \n");
    printf("\n************************************************************************ \n");

    float a, b;
    char op;

    printf("\nDigite o primeiro numero: ");  scanf("%f", &a);
    printf("Digite o segundo numero: ");  scanf("%f", &b);
    printf("Digite o operador (+, -, *, /): "); scanf(" %c", &op);
    
	switch (op) {
        case '+': printf("\nResultado: %.2f\n", a + b); break;
        case '-': printf("\nResultado: %.2f\n", a - b); break;
        case '*': printf("\nResultado: %.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("\nResultado: %.2f\n", a / b);
            else printf("\nErro: divisao por zero!\n");
            break;
        default: printf("\nOperacao matematica nao reconhecida.\n");
    }

    return 0;
}
