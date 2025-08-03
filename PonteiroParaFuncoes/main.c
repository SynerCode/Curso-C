#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int quadrado(int x){
    return x * x;
}

int cubo(int y){
    return y * y * y;
}

int aplicar(int(*f)(int), int valor){
   return f(valor);
}

int somar(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

int main(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    /*
    int (*ptr)(int, int);
    int valor1 = 15;
    int valor2 = 5;

    ptr = somar;
    printf("\nValor : %d\n", ptr(valor1, valor2));

    printf("\nQuadrado de 3: %d\n", aplicar(quadrado, 3));
    printf("\nCubo de 3: %d\n\n", aplicar(cubo, 3));
    */

    int(*op[3])(int, int);

    op[0] = somar;
    op[1] = sub;
    op[2] = mult;

    int x = 10, y = 6, z = 5;

    printf("\nSoma: %d\n", op[0](x,y));
    printf("\nSub: %d\n", op[1](x,z));
    printf("\nMult: %d\n", op[2](y,z));

    return 0;
}
