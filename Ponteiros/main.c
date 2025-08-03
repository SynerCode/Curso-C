#include <stdio.h>
#include <stdlib.h>

void dobrar(int *x);

void main(){
    int valor;
    ///valor = valor + 3;
    ///*x    = *x    * 2;
    printf("\nDigite o valor para dobrarmos : ");
    scanf("%d", &valor);

    dobrar(&valor);
    printf("\nValor digitado eh %d, e valor dobrado eh %d.", valor/2, valor);
}

void dobrar(int *x){
    *x = *x * 2;
}

