#include <stdio.h>

void main(){

    char nome[50];

    printf("\nDigite seu nome : ");
    fgets(nome, sizeof(nome), stdin);

    printf("\nNome digitado eh : %s", nome);

}
