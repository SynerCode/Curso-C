#include <stdio.h>
#include <stdlib.h>
#include "memoria.h"

static BlocoMemoria memoria[MAX_BLOCOS];
static int totalBlocos = 0;

void inicalizarMemoria(){
    for(int i = 0; i < MAX_BLOCOS; i++){
        memoria[i].endenreco = NULL;
        memoria[i].tamanho = 0;
        memoria[i].emUso = 0;
    }
}

void alocarBloco(int tamanho){
    if(totalBlocos >= MAX_BLOCOS){
        printf("\nLimite de blocos atingido.\n");
        return;
    }

    void* ptr = malloc(tamanho);
    if(ptr == NULL){
        printf("\nErro ao alocar memória...\n");
        return;
    }

    memoria[totalBlocos].endenreco = ptr;
    memoria[totalBlocos].tamanho = tamanho;
    memoria[totalBlocos].emUso = 1;
    totalBlocos++;

    printf("\nBloco alocada com sucesso (indice: %d).", totalBlocos - 1);
}

void liberarBloco(int indice){
    if(indice < 0 || indice >= totalBlocos || memoria[indice].emUso == 0){
        printf("\nIndice inválido...");

        if(indice < 0){
            printf("\nIndice negativo, digite um valor positivo.");
        }
        else if(indice >= totalBlocos){
            printf("\nIndice maior que o total de blocos, digite outro valor.");
        }
        else{
           printf("\nMemória não está em uso.");
        }
        return;
    }

    free(memoria[indice].endenreco);
    memoria[indice].emUso = 0;
    printf("\nBloco %d liberado.\n", indice);
}

void exibirMemoria(){
    printf("\n=========== Estado da Memória ===========\n");
    for(int i = 0; i < totalBlocos; i++){
        printf("\nBloco %d : ", i);
        if(memoria[i].emUso){
            printf("\nEND : %p\t\tTam : %d bytes\t\tEm uso\n", memoria[i].endenreco, memoria[i].tamanho);
        }
        else{
           printf("\nLIBERADO\n");
        }
    }
    printf("\n=========================================");
}

void liberarTodaMemoria(){
    for(int i = 0; i < totalBlocos; i++){
        if(memoria[i].emUso){
            free(memoria[i].endenreco);
            memoria[i].emUso = 0;
        }
    }
    totalBlocos = 0;
    printf("\nToda memória foi liberada.\n");
}
