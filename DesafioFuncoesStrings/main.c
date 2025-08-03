#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

///Crie um programa que:
/// 1 - Leia dois nomes completos do usu�rio (usando fgets). = OK
/// 2 - Compare se os nomes s�o iguais (ignorando diferen�a de mai�sculas/min�sculas). = OK
/// 3 - Se forem diferentes, concatene os dois nomes em uma nova string. = OK
/// 4 - Mostre o comprimento de cada nome individual e da string final. = OK
/// 5 - Verifique se algum dos nomes cont�m a letra 'a' (min�scula) e informe a
///     posi��o da primeira ocorr�ncia.

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

    /// Converter para min. para compara��o segura
    paraLetraMin(nome1_lower, nome1);
    paraLetraMin(nome2_lower, nome2);

    if(strcmp(nome1_lower, nome2_lower) == 0){
        printf("\nOs nomes s�o iguais (ignorando mai�sculas).\n");
    }
    else{
        printf("\nOs nomes s�o diferente. concatenando....\n");
        strcpy(resultado, nome1);
        strcat(resultado, " ");
        strcat(resultado, nome2);

        printf("\nNome concatenado : %s\n", resultado);
        printf("Comprimento do nome1 : %lu\n", strlen(nome1));
        printf("Comprimento do nome2 : %lu\n", strlen(nome2));
        printf("Comprimento do nome final : %lu\n", strlen(resultado));
    }

    /// verificar a presen� da letra 'a'
    p = strchr(nome1, 'a');
    if(p != NULL){
        printf("\nLetra 'a' encontrado em nome1 na posi��o : %d\n", (p - nome1) ) ;
    }
    else {
        printf("\nLetra 'a' n�o foi encontrado no nome1.\n");
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

