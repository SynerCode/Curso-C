#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Estruturas
struct Produto {
    char nome[50];
    float preco;
};

///Protótipos das funções
void exibirProduto(struct Produto p);
void alterarPreco(struct Produto *p, float novoPreco);

void main(){

    struct Produto prod1 = {"Computador", 2000.56};
    struct Produto prod2 = {"Mouse", 10.50};

    printf("\nPreco original\n");
    exibirProduto(prod1);
    exibirProduto(prod2);

    alterarPreco( &prod1, 1555.98 );
    alterarPreco( &prod2, 55.98 );

    printf("\n\nPreco Modificado\n");
    exibirProduto(prod1);
    exibirProduto(prod2);
}

void exibirProduto(struct Produto p){
    printf("\nProduto : %s\t\tPreco : %.2f\n", p.nome, p.preco);
}

void alterarPreco(struct Produto *p, float novoPreco){
    p->preco = novoPreco;
}

