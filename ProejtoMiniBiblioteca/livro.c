#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "livro.h"

void cadastrarLivro(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    struct Livro livro;
    FILE *f = fopen("biblioteca.dat", "ab");

    if(f == NULL){
        printf("\nErro ao abrir o arquivo biblioteca.dat.\n");
        return;
    }

    printf("\nDigite o c�digo do Livro : ");
    scanf("%d", &livro.codigo);
    getchar();

    printf("\nDigite o T�tulo do Livro : ");
    fgets(livro.titulo, MAX_TITULO, stdin);
    livro.titulo[strcspn(livro.titulo, "\n")] = '\0';

    printf("\nDigite o nome do Autor : ");
    fgets(livro.autor, MAX_AUTOR, stdin);
    livro.autor[strcspn(livro.autor, "\n")] = '\0';

    printf("\nDigite o Ano : ");
    scanf("%d", &livro.ano);
    getchar();

    fwrite(&livro, sizeof(struct Livro),1,f);
    fclose(f);

    printf("\n\nLivro cadastrado com Sucesso...\n\n");
}

void listarLivros(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    struct Livro livro;
    FILE *f = fopen("biblioteca.dat", "rb");

    if(f == NULL){
        printf("\nOu arquivo n�o existe, ou n�o tem livro cadastrado...\n");
        return;
    }

    printf("\n========= Lista dos Livros =========\n");

    while(fread(&livro, sizeof(struct Livro),1,f)){
        printf("\nC�digo : %d", livro.codigo);
        printf("\nT�tulo : %s", livro.titulo);
        printf("\nAutor : %s", livro.autor);
        printf("\nAno : %d\n", livro.ano);
        printf("---------------------------------------------------\n");
    }

    fclose(f);
}

void buscarLivroPorCodigo(int codigo){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    struct Livro livro;
    int econtrado = 0;

    FILE *f = fopen("biblioteca.dat", "rb");

    if(f == NULL){
        printf("\nArquivo n�o foi encontrado...\n");
        return;
    }

    while( fread(&livro, sizeof(struct Livro),1,f) ){
        if(livro.codigo == codigo){
            printf("\n====== Livro encontrado ======\n");
            printf("\nC�digo : %d", livro.codigo);
            printf("\nT�tulo : %s", livro.titulo);
            printf("\nAutor : %s", livro.autor);
            printf("\nAno : %d\n", livro.ano);
            printf("\n===============================\n");
            econtrado = 1;
            break;
        }
    }

    if(!econtrado){
        printf("\nLivro com o c�digo %d n�o foi encontrado no sistema.\n", codigo);
    }

    fclose(f);
}
