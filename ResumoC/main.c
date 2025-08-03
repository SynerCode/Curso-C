#include <stdio.h>
#include <stdlib.h>

int calcular(int a, int b);

void main(){

    int vl1 = 12;
    int vl2 = 5;
    printf("\nResultado : %d", calcular(vl1, vl2));
}

int calcular(int a, int b){
    return a - b;
    //printf("\nMult : %d", a * b);
}

