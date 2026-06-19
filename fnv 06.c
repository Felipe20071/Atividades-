        //nome:Felipe Nunes Vieira RA:0027809


        #include <stdio.h>
        #include <stdlib.h>
        #include <locale.h>
	
	int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                           *\n");
    printf("* Programa FNV-06 - Percentual de Faltas e Presencas                 *\n");
    printf("***********************************************************************\n\n");

 


        int tf, tp;
        float pf,pp,ta;


        printf("DIgite o total de faltas: ");
        scanf("%d",&tf);


        printf("Digite o total de presenca: ");
        scanf("%d",&tp);


        ta=tf+tp;
        pf=(tf/ta)*100;
        pp=(tp/ta)*100;

        printf("O percentual de faltas foi de: %.2f%%\n",pf);

        printf("O percentual de presença foi de: %.2f%%\n",pp);


        getchar();


        return 0;

        }
