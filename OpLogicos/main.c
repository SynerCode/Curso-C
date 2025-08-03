#include <stdio.h>

void main(){

    /*
        você deve criar várias variáveis para armazenar os dados

        1º - Verifique se a pessoa é de maior E tem habilitação = OK
        2º - Verifique se a pessoa é do brasil E tem mais que 70 anos
        3º - verifique se a pessoa é do brasil OU de portugal, E tem mais de
        50 anos E é casado.
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
