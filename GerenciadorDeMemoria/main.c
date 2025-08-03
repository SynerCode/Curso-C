#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "memoria.h"

///Descri��o do Projeto Gerenciador de mem�ria RAM
///O programa simula um gerenciador de mem�ria RAM, onde o usu�rio pode:
///Alocar blocos de mem�ria de tamanhos variados
///Liberar blocos de mem�ria (simula free)
///Ver o estado da mem�ria (endere�os, tamanhos, livre/ocupado)
///Sair do programa liberando toda a mem�ria alocada

///Estrutura do Projeto
///main.c - Menu principal e entrada do usu�rio
///memoria.c - Implementa��o da l�gica de aloca��o/libera��o = OK
///memoria.h - Structs, prot�tipos e constantes = OK

///O que precisaremos?
///Ponteiros, aloca��o dinamica, vetores, constantes, structs, modulariza��o


int main(){
    setlocale(LC_CTYPE, "");

    int opcao;
    int tamanho, indice;

    inicalizarMemoria();

    do{

        printf("\n==== SIMULADOR DE MEM�RIA ====\n");
        printf("\n1 - Alocar bloco.");
        printf("\n2 - Liberar bloco.");
        printf("\n3 - Ver mem�ria.");
        printf("\n0 - Sair do Sistema.\n");
        printf("\nDigite sua op��o : ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\nDigite o tamanho do bloco : ");
                scanf("%d", &tamanho);
                alocarBloco(tamanho);
                break;

            case 2:
                printf("\nDigite o indice do bloco para liberar : ");
                scanf("%d", &indice);
                liberarBloco(indice);
                break;

            case 3:
                exibirMemoria();
                break;

            case 0:
                liberarTodaMemoria();
                printf("\nSaindo do sistema...\n");
                break;

            default:
                printf("\nOp��o inv�lica, digite novamente...\n");
        }

    }while(opcao != 0);

    return 0;
}
