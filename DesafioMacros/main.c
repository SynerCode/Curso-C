#include <stdio.h>
#include <stdlib.h>
#include "macros.h"

///Crie um programa com:
///1 - Crie um arquivo com macros QUADRADO(x) e PI para
///    calcular o quadrado de um n�mero = OK
///2 - Um modo de depura��o que imprime mensagens extras usando #ifdef DEBUG = OK
///3 - Um header com prote��o contra m�ltipla inclus�o = OK

///#define DEBUG

int main(){
    int num;

    #ifdef DEBUG
        printf("\n[DEBUG] Programa iniciado.\n");
    #endif // DEBUG

    printf("\nDigite um valor : ");
    scanf("%d", &num);

    int result = QUADRADO(num);

    #ifdef DEBUG
        printf("\n\n[DEBUG] Valor lido : %d", num);
        printf("\n[DEBUG] Valor digitado ao quadrado : %d\n\n\n", result);
    #endif // DEBUG

    printf("\nResultado : %d", result);

    return 0;
}
