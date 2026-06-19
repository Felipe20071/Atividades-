		//nome:Felipe Nunes Vieira RA:0027809
		
		
		#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-04 - Consumo Medio do Automovel                       *\n");
    printf("***********************************************************************\n\n");
		
		
		float km,consumo,media;
		
		
		printf("A distancia percorrida do automovel: ");
		scanf("%f",&km);
		
		
		printf("informe o total de combustivel gasto: ");
		scanf("%f",&consumo);
		
		
		if (consumo > 0) {
		        media = km / consumo;
		
		        printf("Consumo total gasto e: %.2f Km/L\n", media);
		    } else {
		        printf("Erro: O consumo deve ser maior que zero.\n");
		    }
		
		
		getchar();
		
		
		return 0;
		}
