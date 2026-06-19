    //nome:Felipe Nunes Vieira RA:0027809


    #include <stdio.h>
    #include <stdlib.h>
	#include <locale.h>

	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-03 - Calculadora de Idade em Dias                     *\n");
    printf("***********************************************************************\n\n");
    
    int idade;
   
   printf("__Progama que calcula idade em dias__\n\n");
   
   printf("Qual sua idade? \n");
   scanf("%d",&idade);
   
   idade=idade*365.25;
   
   printf("Sua idade em dias e: %d\n",idade);
   
   getchar();
   
   return 0;
}
