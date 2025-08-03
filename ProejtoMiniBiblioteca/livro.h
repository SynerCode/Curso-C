#ifndef LIVRO_H
#define LIVRO_H

#define MAX_TITULO 100
#define MAX_AUTOR 100

struct Livro{
    int codigo;
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
};

void cadastrarLivro();
void listarLivros();
void buscarLivroPorCodigo(int codigo);

#endif // LIVRO_H
