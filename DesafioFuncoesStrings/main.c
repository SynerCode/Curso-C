#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

///Crie um programa que:
/// 1 - Leia dois nomes completos do usuário (usando fgets). = OK
/// 2 - Compare se os nomes são iguais (ignorando diferença de maiúsculas/minúsculas). = OK
/// 3 - Se forem diferentes, concatene os dois nomes em uma nova string. = OK
/// 4 - Mostre o comprimento de cada nome individual e da string final. = OK
/// 5 - Verifique se algum dos nomes contém a letra 'a' (minúscula) e informe a
///     posição da primeira ocorrência.

void removeQuebraLinha (char *str);
void paraLetraMin(char *dest, char *src);


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char nome1[100], nome2[100], nome1_lower[100], nome2_lower[100];
    char resultado[201];
    char *p;

    printf("\nDigite o primeiro nome: ");
    fgets(nome1, 100, stdin);
    removeQuebraLinha(nome1);

    printf("\nDigite o segundo nome: ");
    fgets(nome2, 100, stdin);
    removeQuebraLinha(nome2);

    /// Converter para min. para comparação segura
    paraLetraMin(nome1_lower, nome1);
    paraLetraMin(nome2_lower, nome2);

    if(strcmp(nome1_lower, nome2_lower) == 0){
        printf("\nOs nomes são iguais (ignorando maiúsculas).\n");
    }
    else{
        printf("\nOs nomes são diferente. concatenando....\n");
        strcpy(resultado, nome1);
        strcat(resultado, " ");
        strcat(resultado, nome2);

        printf("\nNome concatenado : %s\n", resultado);
        printf("Comprimento do nome1 : %lu\n", strlen(nome1));
        printf("Comprimento do nome2 : %lu\n", strlen(nome2));
        printf("Comprimento do nome final : %lu\n", strlen(resultado));
    }

    /// verificar a presenã da letra 'a'
    p = strchr(nome1, 'a');
    if(p != NULL){
        printf("\nLetra 'a' encontrado em nome1 na posição : %d\n", (p - nome1) ) ;
    }
    else {
        printf("\nLetra 'a' não foi encontrado no nome1.\n");
    }

    return 0;
}

void removeQuebraLinha (char *str){
    str[strcspn(str, "\n")] = '\0';
}

void paraLetraMin(char *dest, char *src){
    int i = 0;

    while(src[i] != '\0'){
        dest[i] = tolower((unsigned char)src[i]);
        i++;
    }
    dest[i] = '\0';
}

