#include <stdio.h>
#include <stdlib.h>

void main(){

    ///Crie um programa que:
        ///Tenha uma matriz (5x5). = OK
        ///Preencha a matriz com valores digitados pelo usuário. = OK
        ///Imprima a matriz original. = OK
        ///Calcule e mostre:
            ///A soma de todos os elementos = OK
            ///A soma de cada linha = OK
            ///A soma de cada coluna = OK

    int matriz[5][5];
    int somaTotal = 0;

    ///Capturando dados do usuario
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite o valor para a posicao [%d][%d] : ", i, j);
            scanf("%d", &matriz[i][j]);
            somaTotal += matriz[i][j];
        }
    }

    printf("\n\n");
    /// Mostrando valores da matriz
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    ///Soma total
    printf("\nA soma total da matriz eh : %d\n", somaTotal);

    ///Soma por linha
    for(int i = 0; i < 5; i++){
        int somaLinha = 0;
        for(int j = 0; j < 5; j++){
            somaLinha += matriz[i][j];
        }
        printf("\nA soma da linha %d eh = %d\n", i+1, somaLinha);
    }

    ///Soma por Coluna
    for(int j = 0; j < 5; j++){
        int somaColuna = 0;
        for(int i = 0; i < 5; i++){
            somaColuna += matriz[i][j];
        }
        printf("\nA soma da coluna %d eh = %d\n", j+1, somaColuna);
    }

}
