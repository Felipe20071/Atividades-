// JPA-35.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    printf("\n************************************************************************ \n");
    printf("\n* Aluno: Felipe Nunes Vieira - RA  0027809   * \n");
    printf("\n* Programa JPA-35 - Sequencia de Fibonacci (n termos)                  * \n");
    printf("\n************************************************************************ \n");
 
    int n;
    int i;
    
    printf("\nQuantos termos de Fibonacci deseja ver? ");
    scanf("%d", &n);
 
    long long a = 0, b = 1, temp;
    printf("\nSequencia de Fibonacci:\n");
    for (i = 1; i <= n; i++) {
        printf("%lld\n", a);
        temp = a + b;
        a = b;
        b = temp;
    }
 
    return 0;
}

