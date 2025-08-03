#include <stdio.h>

void main(){

    int controle = 0;
    int notas[3];
    int nota;

    while(controle < 3){
        printf("\nDigite %d nota : ", controle+1);
        scanf("%d", &nota);

        if(nota >= 0 && nota <= 10){
            notas[controle] = nota;
            controle++;
            printf("\nNota salva com sucesso!");
        }
        else{
            printf("\nA nota precisa ser entre 0 e 10.");
            printf("\nDigite novamente a nota...\n");
        }
    }

    for(int i = 0; i < 3; i++){
        printf("\nNota %d : %d", i+1, notas[i]);
    }
}
