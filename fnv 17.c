// FNV-17.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-17 - ...O Sensor do Parque Temático...*\n");
    printf("***********************************************************************\n\n");

    float altura;
    printf("Digite a altura da crianca em cm: ");
    scanf("%f", &altura);

    if (altura >= 140)
        printf("\033[0;32mLUZ VERDE - Acesso liberado!\033[0m\n");
    else
        printf("\033[0;31mLUZ VERMELHA - Acesso negado. Altura minima: 140 cm.\033[0m\n");

    return 0;
}
