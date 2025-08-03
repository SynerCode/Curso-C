#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    printf("Você, é, Atualização!\n");
    return 0;
}
