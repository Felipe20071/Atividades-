	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-12 - Tabuada de um Numero                             *\n");
    printf("***********************************************************************\n\n");
	int a,b;
	
	printf("escolha um numero: ");
	scanf("%d",&b);
	
	for(a=1;a<=10;a++){
		
	printf("%d x %d = %d\n",b,a,b*a);

			
	}
	return 0;
	
	}
