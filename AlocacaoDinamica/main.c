#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas = 5;
    int colunas = 5;
    int **matriz = malloc(linhas * sizeof(int*));

    for(int i = 0; i < 5; i++){
        matriz[i] = malloc(colunas * sizeof(int));
    }

    free(matriz);
}
