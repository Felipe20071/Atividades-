// FNV-14.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-14 - ...Tipo de Triângulo...*\n");
    printf("***********************************************************************\n\n");

    float l1, l2, l3;
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &l1, &l2, &l3);

    if (l1 == l2 && l2 == l3)
        printf("Triangulo Equilatero\n");
    else if (l1 == l2 || l2 == l3 || l1 == l3)
        printf("Triangulo Isosceles\n");
    else
        printf("Triangulo Escaleno\n");

    return 0;
}
