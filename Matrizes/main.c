#include <stdio.h>
#include <stdlib.h>

void main(){

    int linha;
    int coluna;

    printf("\n\n\n");

    int matriz[2][3] = {
        {0,0,0},///Primeira linha
        {0,0,0} ///Segunda linha
    };

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("\nDigite o valor da matriz na posicao [%d][%d] : ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("\n\n\n");

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n\n\n");
}
