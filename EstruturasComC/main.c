#include <stdio.h>
#include <stdlib.h>

///Lista encadeada Simples
typedef struct No{
    int valor;
    struct No* proximo;
}No;

void inserirInicio(No** cabeca, int valor){
    No* novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = *cabeca;
    *cabeca = novo;
}

void imprimirLista(No* cabeca){
    while(cabeca != NULL){
        printf("%d -> ", cabeca->valor);
        cabeca = cabeca->proximo;
    }
    printf("NULL\n");
}

///Lista encadeada Dupla
typedef struct NodoDuplo{
    int valor;
    struct NodoDuplo* ant;
    struct NodoDuplo* prox;
}NodoDuplo;

void inserirFimDuplo(NodoDuplo** cauda, int valor){
    NodoDuplo* novo = malloc(sizeof(NodoDuplo));
    novo->valor = valor;
    novo->prox = NULL;
    if(*cauda == NULL){
        novo->ant = NULL;
        *cauda = novo;
    }
    else{
        NodoDuplo* temp = *cauda;
        while(temp->prox != NULL) temp = temp->prox;
        temp->prox = novo;
        novo->ant = temp;
    }
}

void imprimirListaDupla(NodoDuplo* cabeca){
    while(cabeca != NULL){
        printf("%d -> ", cabeca->valor);
        cabeca =  cabeca->prox;
    }
    printf("NULL\n");
}

///Pilha
typedef struct Pilha{
    int valor;
    struct Pilha* prox;
}Pilha;

void push(Pilha** topo, int valor){
    Pilha* novo = malloc(sizeof(Pilha));
    novo->valor = valor;
    novo->prox = *topo;
    *topo = novo;
}

int pop(Pilha** topo){
    if(*topo == NULL) return -1;
    Pilha* temp = *topo;
    int valor = temp->valor;
    *topo = temp->prox;
    free(temp);
    return valor;
}

///Fila
typedef struct Fila{
    int valor;
    struct Fila* prox;
}Fila;

void enfileirar(Fila** frente, Fila** tras, int valor){
    Fila* novo = malloc(sizeof(Fila));
    novo->valor = valor;
    novo->prox = NULL;
    if(*tras != NULL){
        (*tras)->prox = novo;
    }
    *tras = novo;
    if(*frente == NULL) *frente = novo;
}

int desenfileirar(Fila** frente, Fila** tras){
    if(*frente == NULL) return -1;
    Fila* temp = *frente;
    int valor = temp->valor;
    *frente = temp->prox;
    if(*frente == NULL) *tras = NULL;
    free(temp);
    return valor;
}

///¡rvore Bi·ria
typedef struct Arvore{
    int valor;
    struct Arvore* esq;
    struct Arvore* dir;
}Arvore;

Arvore* inserirArvore(Arvore* raiz, int valor){
    if(raiz == NULL){
        Arvore* novo = malloc(sizeof(Arvore));
        novo->valor = valor;
        novo->esq = novo->dir = NULL;
        return novo;
    }
    if(valor < raiz->valor){
        raiz->esq = inserirArvore(raiz->esq, valor);
    }
    else{
        raiz->dir = inserirArvore(raiz->dir, valor);
    }
    return raiz;
}

void emOrdem(Arvore* raiz){
    if(raiz != NULL){
        emOrdem(raiz->esq);
        printf("%d, ", raiz->valor);
        emOrdem(raiz->dir);
    }
}

int main(){
    ///Lista encadeada Simples
    No* lista = NULL;
    inserirInicio(&lista, 15);
    inserirInicio(&lista, 10);
    inserirInicio(&lista, 1);
    inserirInicio(&lista, 5);
    inserirInicio(&lista, 25);
    inserirInicio(&lista, 31);
    inserirInicio(&lista, 100);
    imprimirLista(lista);

    ///Lista encadeada Dupla
    NodoDuplo* listaD = NULL;
    inserirFimDuplo(&listaD, 1);
    inserirFimDuplo(&listaD, 2);
    inserirFimDuplo(&listaD, 3);
    inserirFimDuplo(&listaD, 4);
    inserirFimDuplo(&listaD, 5);
    inserirFimDuplo(&listaD, 6);
    imprimirListaDupla(listaD);

    ///Pilha
    Pilha* pilha = NULL;
    push(&pilha, 5);
    push(&pilha, 7);
    push(&pilha, 6);
    push(&pilha, 9);
    push(&pilha, 15);
    printf("\nValor Removido Pilha : %d", pop(&pilha));
    printf("\nValor Removido Pilha : %d", pop(&pilha));
    printf("\nValor Removido Pilha : %d", pop(&pilha));
    printf("\nValor Removido Pilha : %d", pop(&pilha));
    printf("\nValor Removido Pilha : %d\n\n", pop(&pilha));

    ///Fila
    Fila *frente = NULL, *tras = NULL;
    enfileirar(&frente, &tras, 7);
    enfileirar(&frente, &tras, 5);
    enfileirar(&frente, &tras, 2);
    enfileirar(&frente, &tras, 15);
    enfileirar(&frente, &tras, 75);
    printf("\nDesefileirar : %d", desenfileirar(&frente, &tras));
    printf("\nDesefileirar : %d", desenfileirar(&frente, &tras));
    printf("\nDesefileirar : %d", desenfileirar(&frente, &tras));

    ///¡rvore Bin·ria
    Arvore* raiz = NULL;
    raiz = inserirArvore(raiz, 20);
    raiz = inserirArvore(raiz, 10);
    raiz = inserirArvore(raiz, 25);
    raiz = inserirArvore(raiz, 7);
    raiz = inserirArvore(raiz, 18);
    raiz = inserirArvore(raiz, 31);
    raiz = inserirArvore(raiz, 45);
    raiz = inserirArvore(raiz, 4);
    printf("\n\n¡rvore bin·ria em ordem....\n");
    emOrdem(raiz);
    printf("\n\n\n");

    return 0;
}
