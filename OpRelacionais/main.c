#include <stdio.h>

void main(){

    /*Operadores Relacionais*/
    // 1 = Verdadeiro
    // 0 = Falso

    int valor1 = 15;
    int valor2 = 16;

    //Igualdade ==
    printf("\n1Valor igual? %d\n", valor1 == valor1);//1
    printf("\n2Valor igual? %d\n", valor1 == valor2);//0

    //Diferente !=
    printf("\n1Valor Diferente? %d\n", valor1 != valor1);//0
    printf("\n2Valor Diferente? %d\n", valor1 != valor2);//1

    //Maior >
    printf("\n1Valor Maior? %d\n", valor1 > valor1);//0
    printf("\n2Valor Maior? %d\n", valor2 > valor1);//1
    printf("\n3Valor Maior? %d\n", valor1 > valor2);//0

    //Menor <
    printf("\n1Valor Menor? %d\n", valor1 < valor1);//0
    printf("\n2Valor Menor? %d\n", valor2 < valor1);//0
    printf("\n3Valor Menor? %d\n", valor1 < valor2);//1

    //Maior Igual >=
    printf("\n1Valor Maior Igual? %d\n", valor1 >= valor1);//1
    printf("\n2Valor Maior Igual? %d\n", valor2 >= valor1);//1
    printf("\n3Valor Maior Igual? %d\n", valor1 >= valor2);//0

    //Menor Igual <=
    printf("\n1Valor Menor Igual? %d\n", valor1 <= valor1);//1
    printf("\n2Valor Menor Igual? %d\n", valor2 <= valor1);//0
    printf("\n3Valor Menor Igual? %d\n", valor1 <= valor2);//1

}
