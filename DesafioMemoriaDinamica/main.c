#include <stdio.h>
#include <stdlib.h>

int main(){
    ///Crie um programa que:
    ///1 - Solicite ao usuário um número n. = OK
    ///2 - Aloque dinamicamente um vetor de n inteiros usando malloc. = OK
    ///3 - Preencha o vetor com números fornecidos pelo usuário. = OK
    ///4 - Calcule a média dos valores. = OK
    ///5 - Realoque o vetor para 2n posições usando realloc. = OK
    ///6 - Preencha os novos n espaços com o dobro dos valores anteriores. = OK
    ///7 - Mostre todo o vetor final. = OK
    ///8 - Libere a memória utilizada. = OK

    int n, *v;

    printf("\nDigite o tamnho do vetor : ");
    scanf("%d", &n);

    ///Alocação de memória inicial
    v = (int *) malloc(n * sizeof(int));
    if(v == NULL){
        printf("ERROR, memoria 1\n");
        return 1;
    }

    ///Preenchimento
    for(int i = 0; i < n; i++){
        printf("\nDigite o valor de %d : ", i+1);
        scanf("%d", &v[i]);
    }

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    float media = (float)soma/n;
    printf("\n\nMedia : %.2f", media);


    ///Realocação
    v = (int *) realloc(v, 2 * n * sizeof(int));
    if(v == NULL){
        printf("ERROR, memoria 2\n");
        return 1;
    }

    ///Preencher os novos valores
    for(int i = n; i < 2 * n; i++){
        v[i] = 2 * v[i - n];
    }

    printf("\nValor final:\n");
    for(int i = 0; i < 2 * n; i++){
        printf("%d\n", v[i]);
    }

    free(v);
    v = NULL;

    return 0;
}
