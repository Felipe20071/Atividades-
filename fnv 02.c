
	//nome:Felipe Nunes Vieira RA:0027809
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-02 - Calculadora de Area do Circulo                   *\n");
    printf("***********************************************************************\n\n");
	    
	    
		const float PI = 3.14159;
		float raio, area;
	
	
	    printf("Informe o raio do circulo: ");
	    scanf("%f", &raio);
	
	
	    area = PI*(raio * raio);
	    printf("A area do circulo e: %.2f m2\n", area);
	    
	    
	getchar();
	
	
	    return 0;
	}
