#include <stdio.h>
#include <stdlib.h>

void main(){
    char nome[20];
    char nomeCompleto[100];

    //printf("\nDigite o nome : ");
    //scanf(" %s", nome);
    //printf("\nNome digitado : %s", nome);

    printf("\nDigite o nome completo : ");
    fgets(nomeCompleto, 100, stdin);
    printf("\nNome completo digitado : %s", nomeCompleto);

}
