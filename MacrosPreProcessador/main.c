#include <stdio.h>
#include <stdlib.h>
#include "teste.h"

#define QUADRADO(x) ((x)*(x))
#define CUBO(x) ((x)*(x)*(x))
#define SOMAR(x,y) ((x)+(y))
#define DEBUG

int main(){

    int valor1 = 7, valor2 = 11;

    //printf("\nValor : %d\n", QUADRADO(3));
    //printf("\nValor : %d\n", CUBO(2));
    //printf("\nValor : %d\n", SOMAR(valor1,valor2));

    ///executa se o macro DEB não foi criado
    #ifndef DEB
        printf("\nValor funcao : %d", somar(valor1, valor2));
    #endif

    ///executa se o macro DEBUG foi criado
    #ifdef DEBUG
        printf("\nValor funcao : %d", somar(valor1, valor2));
    #endif

    return 0;
}
