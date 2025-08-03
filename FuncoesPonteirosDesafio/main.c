#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///Crie um programa que:
///Implemente 4 operações matemáticas: somar, subtrair, multiplicar, dividir = OK
///Crie um menu interativo que permite ao usuário escolher uma operação e
///aplicar sobre dois valores = OK

///Use um array de ponteiros para funções para gerenciar o menu = OK
int somar(int a, int b){return a + b;}

int subtrair(int a, int b){return a - b;}

int multiplicar(int a, int b){return a * b;}

int dividir(int a, int b){
    if(b == 0){
        printf("\nErro: divisão por zero!");
    }
    return a / b;
}

int main(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");
    int (*operacoes[4])(int, int) = {somar, subtrair, multiplicar, dividir};
    int escolha, valor1, valor2;

    do{
        printf("\n===== Calculadora com ponteiros =====\n");
        printf("\n1 - Somar.");
        printf("\n2 - Subtrair.");
        printf("\n3 - Multiplicar.");
        printf("\n4 - Dividir.");
        printf("\n0 - Sair....\n");

        printf("\nDigite sua opção : ");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                printf("\n\nDigite o valor 1 : ");
                scanf("%d",&valor1);

                printf("\n\nDigite o valor 2 : ");
                scanf("%d",&valor2);
                printf("\nA soma de %d + %d : %d", valor1, valor2, operacoes[0](valor1, valor2));
            break;

            case 2:
                printf("\n\nDigite o valor 1 : ");
                scanf("%d",&valor1);

                printf("\n\nDigite o valor 2 : ");
                scanf("%d",&valor2);
                printf("\nA subtração de %d - %d : %d", valor1, valor2, operacoes[1](valor1, valor2));
            break;

            case 3:
                printf("\n\nDigite o valor 1 : ");
                scanf("%d",&valor1);

                printf("\n\nDigite o valor 2 : ");
                scanf("%d",&valor2);
                printf("\nA multiplicação de %d * %d : %d", valor1, valor2, operacoes[2](valor1, valor2));
            break;

            case 4:
                printf("\n\nDigite o valor 1 : ");
                scanf("%d",&valor1);

                printf("\n\nDigite o valor 2 : ");
                scanf("%d",&valor2);
                printf("\nA divisão de %d / %d : %d", valor1, valor2, operacoes[3](valor1, valor2));
            break;

            case 0:
                printf("\nSaindo do Sistema....\n");
            break;

            default:
                printf("\nDigite um valor válido.\n");
        }

    }while(escolha != 0);

    return 0;
}
