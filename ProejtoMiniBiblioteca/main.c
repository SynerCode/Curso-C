#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "livro.h"

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    system("chcp 1252");
    ///chcp 65001

    int opcao;
    int codigoBusca;

    printf("\n==================== Mini Biblioteca ====================\n");
    do {
        printf("\nEscolha uma das opções Abaixo...\n");
        printf("\n1 - Cadastrar Livro.");
        printf("\n2 - Listar Livros.");
        printf("\n3 - Buscar livro por código.");
        printf("\n0 - Sair do Sistema....");
        printf("\n\nDigite sua esolha : ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                cadastrarLivro();
            break;

            case 2:
                listarLivros();
            break;

            case 3:
                printf("\nDigite o código do livro : ");
                scanf("%d", &codigoBusca);
                buscarLivroPorCodigo(codigoBusca);
            break;

            case 0:
                printf("\nSaindo do sistema - Mini Biblioteca.\n");
            break;

            default:
                printf("\nDigite uma opção válida.\n");
        }

    }while(opcao != 0);

    printf("\nSistema fechado....");

    return 0;
}
