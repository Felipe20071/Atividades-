	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-13 - Numeros Pares de 1 a 50                          *\n");
    printf("***********************************************************************\n\n");
	
	int a;
	
	for(a=1;a<=50;a++){
	
	if(a % 2 == 0){
	printf("%d\n",a);
	}
	
	}
	
	return 0;
	}







