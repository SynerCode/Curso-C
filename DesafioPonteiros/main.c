#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b);

void  main(){
    ///Crie um programa que:
    ///1 - Solicite 5 números inteiros e armazene em um array. = OK
    ///Use um ponteiro para:
    ///2 - Exibir todos os elementos = OK
    ///3 - Calcular a soma dos valores = OK
    ///4 - Crie uma função trocar(int *a, int *b) que
    ///     troque dois valores usando passagem por referência. = OK

    int v[5];
    int *p = v;
    int soma = 0;

    ///Leitura de dados
    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero : ", i+1);
        scanf("%d", &v[i]);
    }

    ///Exibindo os elementos e realizando Soma por referencia Ponteiros
    for(int i = 0; i < 5; i++){
        printf("\n%d", *(p + i));
        soma += *(p+i);
    }
    printf("\n\nSoma : %d", soma);

    printf("\nAntes da troca: v[0] = %d, v[1] = %d\n", *p, *(p+1));
    trocar(p, &v[1]);
    printf("\nDepois da troca: v[0] = %d, v[1] = %d\n", v[0], v[1]);

    ///Exibindo os elementos e realizando Soma por referencia Ponteiros
    for(int i = 0; i < 5; i++){
        printf("\n%d", *(p + i));
    }
}

void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
