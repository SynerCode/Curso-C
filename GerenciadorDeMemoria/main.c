#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "memoria.h"

///Descrição do Projeto Gerenciador de memória RAM
///O programa simula um gerenciador de memória RAM, onde o usuário pode:
///Alocar blocos de memória de tamanhos variados
///Liberar blocos de memória (simula free)
///Ver o estado da memória (endereços, tamanhos, livre/ocupado)
///Sair do programa liberando toda a memória alocada

///Estrutura do Projeto
///main.c - Menu principal e entrada do usuário
///memoria.c - Implementação da lógica de alocação/liberação = OK
///memoria.h - Structs, protótipos e constantes = OK

///O que precisaremos?
///Ponteiros, alocação dinamica, vetores, constantes, structs, modularização


int main(){
    setlocale(LC_CTYPE, "");

    int opcao;
    int tamanho, indice;

    inicalizarMemoria();

    do{

        printf("\n==== SIMULADOR DE MEMÓRIA ====\n");
        printf("\n1 - Alocar bloco.");
        printf("\n2 - Liberar bloco.");
        printf("\n3 - Ver memória.");
        printf("\n0 - Sair do Sistema.\n");
        printf("\nDigite sua opção : ");
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
                printf("\nOpção inválica, digite novamente...\n");
        }

    }while(opcao != 0);

    return 0;
}
