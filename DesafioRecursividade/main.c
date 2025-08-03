#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///Implemente as 2 fun��es:
///fatorial(int n) = OK
///fibonacci(int n) = OK
///No main, permita ao usu�rio escolher a opera��o e digitar o valor de entrada. = OK

int fatorial(int n){
    if(n == 0) return 1;
    return n * fatorial( n - 1 );
}

int fibonacci(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    int escolha, valor;

    printf("\nEscolha uma fun��o recursiva...\n");
    printf("\n 1 - fatorial");
    printf("\n 2 - fibonacci");
    printf("\n\nDigite a sua op��o : ");
    scanf("%d", &escolha);

    if (escolha == 1){
        printf("\nDigite um n�mero inteiro para o fatorial : ");
        scanf("%d", &valor);
        printf("\nFatorial de %d � %d\n", valor, fatorial(valor));
    }
    else if (escolha == 2){
        printf("\nDigite um n�mero inteiro para o fibonacci : ");
        scanf("%d", &valor);
        printf("\nFibonacci de %d � %d\n", valor, fibonacci(valor));
    }
    else {
        printf("\nNenhuma escolha foi selecionada...");
        printf("\nFim da execu��o do programa.");
    }
}
