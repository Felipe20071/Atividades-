	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

    int main() {
    setlocale(LC_ALL, "Portuguese");
	printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-01 - Verificador de Dinheiro                          *\n");
    printf("***********************************************************************\n\n");
	    float din;
	
	
	    printf("Quanto de dinheiro voce tem?: ");
	    scanf("%f", &din);
	
	
	    if (din >= 50) {
	        printf("Amigao va ao cinema, voce esta RICO\n");
	    } else {
	        printf("Amigao fique em casa assistindo Faustao\n");
	    }
	      
		    
	getchar();
	 
	 
	    return 0;
	}
