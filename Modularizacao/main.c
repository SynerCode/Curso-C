#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "operacoes.h"

void main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    int x = 5, y = 10;

    printf("\nFunção soma, resultado : %d", soma(x, y));
    printf("\nFunção subtrair, resultado : %d", subtrai(x, y));

}
