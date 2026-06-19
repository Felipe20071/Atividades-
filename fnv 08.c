	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-08 - Maior entre Dois Numeros                         *\n");
    printf("***********************************************************************\n\n");
	
	int num1,num2;
	
	printf("Escolha seu primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Escolha seu segundo numero: ");
	scanf("%d",&num2);
	
	if(num1>num2){printf("Seu primeiro numero e maior\n ");
	}
	else if(num1<num2){
	printf("Seu segundo numero e maior");
	}
	else{
	printf("Os numeros sao iguais");
	}
	
	return 0;
	}
