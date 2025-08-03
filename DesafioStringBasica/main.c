#include <stdio.h>

void main(){
    ///Crie um programa que: OK
    ///Peça ao usuário seu nome completo. = OK
    ///Armazene usando fgets. = OK
    ///Mostre a string digitada, caractere por caractere (usando um loop). = OK
    ///Verifique se o nome começa com a letra 'A' ou 'a'. = OK

    char nomeCompleto[100];
    int i = 0;

    printf("\nDigite seu nome completo : ");
    fgets(nomeCompleto, 100, stdin);

    ///Mostrando o nome por caractere
    printf("\nNome por letras\n");

    while (nomeCompleto[i] != '\0'){
        printf("nome[%d] = %c\n", i, nomeCompleto[i]);
        i++;
    }

    if(nomeCompleto[0] == 'A' || nomeCompleto[0] == 'a'){
        printf("\nSeu nome comeca com a letra A!\n");
    }
    else{
        printf("\nSeu nome NAO comeca com a letra A!\n");
    }

}
