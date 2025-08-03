#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"

///Sistema de agendamento com lista encadeada e persistência em arquivos
///Estrutura completa do projeto:
///Arquivos:
///agenda.h: definição da struct e funções = OK
///agenda.c: implementação da lógica de lista e arquivo = OK
///main.c: interface com o usuário

///Conceitos aplicados:
///Lista encadeada com struct e malloc
///Persistência com fread / fwrite
///Separação modular (.h e .c)
///Menu interativo com entrada via fgets


int main(){
    Compromisso* agenda = NULL;
    Compromisso novo;
    int opcao;
    const char* arquivo = "agenda.dat";

    carregar(&agenda, arquivo);

    do{
        printf("\n=================== Sua Agenda ===================\n");
        printf("\n1 - Adicionar Compromisso.");
        printf("\n2 - Listar Compromissos.");
        printf("\n3 - Salvar Compromisso.");
        printf("\n0 - SAIR DO SISTEMA.");

        printf("\nDigite sua opcao : ");
        scanf("%d", &opcao);
        getchar();

        if(opcao == 1){
            printf("\nDigite os campos....\n\n");
            printf("\nNome : ");
            fgets(novo.nome, TAM_NOME, stdin);
            novo.nome[strcspn(novo.nome, "\n")] = '\0';

            printf("\nData (DD/MM/AAAA) : ");
            fgets(novo.data, TAM_DATA, stdin);
            novo.data[strcspn(novo.data, "\n")] = '\0';

            printf("\nHora (HH:MM) : ");
            fgets(novo.hora, TAM_HORA, stdin);
            novo.hora[strcspn(novo.hora, "\n")] = '\0';

            adicionar(&agenda, novo);
        }
        else if(opcao == 2){
            listar(agenda);
        }
        else if(opcao == 3){
            salvar(agenda, arquivo);
        }
        else if(opcao == 0){
            printf("\nSaindo do Sistema.....\n");
        }
        else{
            printf("\nDigite uma opcao valida.....\n");
        }

    }while(opcao != 0);


    return 0;
}
