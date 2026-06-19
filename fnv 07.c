	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include<stdio.h>
	#include<stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-07 - Numero Positivo, Negativo ou Zero                *\n");
    printf("***********************************************************************\n\n");
	
		
		float numero;
	    
		printf("Digite um numero: ");
	    scanf("%f",&numero);
	    printf("\n")
	    
	    if (numero > 0) {
	        printf("O seu numero e positivo.\n");
	    } else if (numero < 0) {
	        printf("O seu numero e negativo.\n");
	    } else {
	        printf("O seu numero e zero.\n");
	    }
	
	    return 0;	
		
	}
