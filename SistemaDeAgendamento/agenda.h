#ifndef AGENDA_H
#define AGENDA_H

#define TAM_NOME 50
#define TAM_DATA 12
#define TAM_HORA 6

typedef struct Compromisso{
    char nome[TAM_NOME];
    char data[TAM_DATA];
    char hora[TAM_HORA];
    struct Compromisso* prox;
}Compromisso;

void adicionar(Compromisso** agenda, Compromisso novo);
void listar(Compromisso* agenda);
void salvar(Compromisso* agenda, const char* arquivo);
void carregar(Compromisso** agenda, const char* arquivo);
void liberar(Compromisso* agenda);

#endif // AGENDA_H
