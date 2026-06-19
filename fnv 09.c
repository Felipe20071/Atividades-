	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-09 - Verificar Numero Par ou Impar                    *\n");
    printf("***********************************************************************\n\n");

		
		int num;
		
		printf("Escolha um numero: ");
		scanf("%d}",&num);
		
		
		if(num % 2 == 0){
		printf("Seu numero e par \n",num);
		
		}else {
		printf("seu numero e impar \n",num);
	    
		}
	
		
		return 0;	
	}
