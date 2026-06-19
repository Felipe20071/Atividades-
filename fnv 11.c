	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-11 - Soma de Numeros de 1 a N                         *\n");
    printf("***********************************************************************\n\n");
		
	int a,soma,b;
	
	printf("Escolha um numero: ");
	scanf("%d",&b);
	
	for(a=1;a<=10;a++){
	
	
	printf("%d + %d = %d \n",a,b,a+b);
		
		
	}
	return 0;
	}
