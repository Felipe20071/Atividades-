// JPA-38.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809                        * \n");
    printf("\n* Programa JPA-38 - Senha Correta (WHILE)                              * \n");
    printf("\n************************************************************************ \n");

    char senha[50];
    char senhaCorreta[] = "1234";

    printf("\nDigite a senha: ");
    scanf("%s", senha);

    while (strcmp(senha, senhaCorreta) != 0) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%s", senha);
    }
    printf("\nLIBERADO!\n");

    return 0;
}
