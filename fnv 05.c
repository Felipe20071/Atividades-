		//nome:Felipe Nunes Vieira RA:0027809
		
		
		#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
	
	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-05 - Calculo de Conta de Agua e Esgoto                *\n");
    printf("***********************************************************************\n\n");
		
			
			float ta, te, vp;
			
			
			printf("Insira o valor da taxa TA: ");
			scanf("%f",&ta);
			
			
			te = 0.8 * ta;
			vp =ta + te;
			
			
			printf("O valor a ser pago e: %.2f\n",vp);
			
			
			getchar();
			
			
			return 0;
			
			
		}
