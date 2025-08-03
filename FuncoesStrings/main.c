#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    /*
    char nome[] = "Arthur";
    ///strlen - Pega o tamanho da string sem o \0
    int tamanho = strlen(nome);
    printf("\nTamanho da string : %d\n\n", tamanho);

    char copia[7];
    ///strcpy - copia uma string para outra (destino, origem).
    strcpy(copia, nome);
    printf("\nCopia : %s\n\n", copia);


    char palavra1[] = "Bruno";
    char palavra2[] = "Bruna";
    ///strcmp = Comparação de strings por ordem alfabética
    if(strcmp(palavra1, palavra2) == 0){
        printf("\nPalavras iguais....\n");
    }
    else if(strcmp(palavra1, palavra2) < 0){
        printf("\nPrimeira Palavra é menor");
    }
    else{
        printf("\nPrimeira Palavra é maior");
    }


     char saudacao[30] = "Bom ";
     printf("\n%s\n\n", saudacao);

     ///strcat = Concatenação de strings
     strcat(saudacao, "dia!");

     printf("\n%s\n\n", saudacao);
    */

    char *p = strchr("Arthur felipe", 't');
    char *ptr = strstr("Luiz carlos barbosa", "los");

    printf("\n%s\n", p);
    printf("\n%s\n", ptr);

}
