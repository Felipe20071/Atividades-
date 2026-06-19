// FNV_login.c - Menu de Login Simples
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_TENTATIVAS 3

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    
//da uma moral pra mim professor pq esse projeto ainda ta em desenvolvimento mas vai ficar legal
    
	
	printf("\n***********************************************************************\n");
    printf("* Aluno: FELIPE NUNES VIEIRA - RA  0027809                *\n");
    printf("* Programa FNV-18 - ...Login simples...*\n");
    printf("***********************************************************************\n\n");
    
	char usuario[50], senha[50];
    int tentativas = 0;

    printf("\n=============================\n");
    printf("     SISTEMA DE LOGIN\n");
    printf("  Felipe Nunes Vieira - FNV\n");
    printf("=============================\n\n");

    while (tentativas < MAX_TENTATIVAS) {
        printf("Usuario: ");
        scanf("%49s", usuario);
        printf("Senha  : ");
        scanf("%49s", senha);

        if (strcmp(usuario, "admin") == 0 && strcmp(senha, "@ad1") == 0) {
            printf("\n[OK] Acesso permitido! Bem-vindo, %s!\n", usuario);

            // Menu principal
            int opcao;
            do {
                printf("\n---- MENU ----\n");
                printf("1. Ver notas\n");
                printf("2. Ver frequencia\n");
                printf("0. Sair\n");
                printf("Opcao: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1: printf("\n[Notas] Em desenvolvimento.\n"); break;
                    case 2: printf("\n[Frequencia] Em desenvolvimento.\n"); break;
                    case 0: printf("\nAte mais!\n"); break;
                    default: printf("\nOpcao invalida!\n");
                }
            } while (opcao != 0);

            return 0;
        }

        tentativas++;
        printf("\n[X] Usuario ou senha incorretos. Tentativas restantes: %d\n\n",
               MAX_TENTATIVAS - tentativas);
    }

    printf("[!] Acesso bloqueado apos %d tentativas.\n\n", MAX_TENTATIVAS);
    return 1;
}

