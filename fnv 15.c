// FNV-15.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-15 - ...Quantas caixas cabem dentro do caminhão...*\n");
    printf("***********************************************************************\n\n");

    float alt_cam, larg_cam, comp_cam;
    float alt_cx, larg_cx, comp_cx;

    printf("Dimensoes do caminhao(em metros)\n");
    printf("Altura: ");
	scanf("%f",&alt_cam);
	printf("Largura: "); 
	scanf("%f",&larg_cam);
	printf("Comprimento: ");
	scanf("%f",&comp_cam);

    printf("Dimensoes da caixa(em metros)\n");
    printf("Altura: ");
    scanf("%f",&alt_cx);
	printf("Largura: "); 
	scanf("%f",&larg_cx);
	printf("Comprimento: "); 
	scanf("%f",&comp_cx);

    int qtd = (int)(alt_cam / alt_cx) * (int)(larg_cam / larg_cx) * (int)(comp_cam / comp_cx);
    printf("Cabem %d caixas no caminhao.\n", qtd);

    return 0;
}
