#include <stdio.h>

void main(){

    /*
        voc� deve criar v�rias vari�veis para armazenar os dados

        1� - Verifique se a pessoa � de maior E tem habilita��o = OK
        2� - Verifique se a pessoa � do brasil E tem mais que 70 anos
        3� - verifique se a pessoa � do brasil OU de portugal, E tem mais de
        50 anos E � casado.
    */
    int idade = 18;
    int temCateira = 1;
    if (idade >= 18 && temCateira){
        printf("\nPode dirigir!...\n");
    }
    else {
        printf("\nNao pode dirigir!...");
    }

    int eDoBrasil = 1;
    int idade2 = 70;
    if (eDoBrasil && idade2 > 70){
        printf("\n\nPode se aposentar!...\n");
    }
    else {
        printf("\nNao pode se aposentar!...\n");
    }

    int eDePortugal = 0;
    int eCasado = 1;

    if( (eDoBrasil || eDePortugal) && (idade2 > 50 && eCasado) ){
        printf("\n\nOk, voce pode se aposentar em nosso pais!...");
    }
    else {
        printf("\n\nNao, voce NAO pode se aposentar em nosso pais!...");
    }

}
