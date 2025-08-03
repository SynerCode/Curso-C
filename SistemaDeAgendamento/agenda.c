#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"

void adicionar(Compromisso** agenda, Compromisso novo){
    Compromisso* novoComp = (Compromisso*) malloc(sizeof(Compromisso));
    *novoComp = novo;
    novoComp->prox = NULL;

    if(*agenda == NULL){
        *agenda = novoComp;
    }
    else{
        Compromisso* temp = *agenda;
        while(temp->prox != NULL) temp = temp->prox;
        temp->prox = novoComp;
    }
}

void listar(Compromisso* agenda){
    Compromisso* atual = agenda;
    printf("\n-------- Lista de Compromissos --------\n");

    while(atual != NULL){
        printf("\nNome : %s\t\tData : %s\t\tHora : %s", atual->nome, atual->data, atual->hora);
        atual = atual->prox;
    }
}

void salvar(Compromisso* agenda, const char* arquivo){
    FILE* f = fopen(arquivo, "wb");
    if(!f){
        printf("\nErro arquivo, funcao salvar.\n");
        return;
    }

    Compromisso* atual = agenda;
    while(atual != NULL){
        fwrite(atual, sizeof(Compromisso) - sizeof(Compromisso*),1,f);
        atual = atual->prox;
    }
    printf("\nDados salvos com sucesso...\n");
    fclose(f);
}

void carregar(Compromisso** agenda, const char* arquivo){
    FILE* f = fopen(arquivo, "rb");
    if(!f){
        printf("\nErro ao ler arquivo...\n");
        return;
    }
    Compromisso temp;
    while(fread(&temp, sizeof(Compromisso) - sizeof(Compromisso*),1,f)){
        temp.prox = NULL;
        adicionar(agenda, temp);
    }
    fclose(f);
}

void liberar(Compromisso* agenda){
    Compromisso* atual;
    while(agenda != NULL){
        atual = agenda;
        agenda = agenda->prox;
        free(atual);
    }
}
