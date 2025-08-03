#include <stdio.h>

void main(){
    /*
        IF - ELSE IF - ELSE
        1º Criar variaveis para armazenar idade e altura que deve ser digitadas pelo usuario
        2º Verificar se é de maior E possui mais de 1.65 para servir ao exercito.
        3º Verificar outras condicoes, se é de maior E altura baixa
        4º Verificar outras condicoes, se é de maior E altura maior que a permitida 1.90
        5º Verificar outras condicoes, se não é de maior nem atende a altura exigida


        SWITCH CASE
        1º Criar uma variavel para armazenar a opção de menu.
        2º Verificar a variavel se atende a algum valor do menu correspondido
        3º Deve ter pelo menos 5 opções
    */


    int idade;
    float altura;

    printf("\nDigite sua idade : ");
    scanf("%d", &idade);

    printf("\nDigite sua altura : ");
    scanf("%f", &altura);

    if ( idade >= 18 && (altura >= 1.65 && altura <= 1.90)){
        printf("\nVoce servira ao exercito!...");
    }
    else if ( idade >= 18 && altura < 1.65){
        printf("\nVoce NAO servira ao exercito, por conta da sua altura ser menor que 1.65!...");
    }
    else if ( idade >= 18 && altura > 1.90){
        printf("\nVoce NAO servira ao exercito, por conta da sua altura ser MAIOR que 1.90!...");
    }
    else {
        printf("\nVoce NAO servira ao exercito, por conta da sua IDADE!");
    }


    int valor;
    printf("\n1 - Menu1. \n2 - Menu2. \n3 - Menu3. \n4 - Menu4. \n5 - Menu5\n\n");
    printf("\nDigite o valor do menu que voce deseja ir : ");
    scanf("%d", &valor);

    switch (valor){

        case 1:
            printf("\nVoce vai para o Menu1.");
        break;

        case 2:
            printf("\nVoce vai para o Menu2.");
        break;

        case 3:
            printf("\nVoce vai para o Menu3.");
        break;

        case 4:
            printf("\nVoce vai para o Menu4.");
        break;

        case 5:
            printf("\nVoce vai para o Menu5.");
        break;

        default:
            printf("\nEscolha uma opcao valida....");
    }

}
