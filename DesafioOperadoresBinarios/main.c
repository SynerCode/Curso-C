#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///Crie um sistema que use flags com bits para representar o estado
///de um personagem.

/// Bit         Significado
/// 0           Está Vivo = OK
/// 1           Tem Munição = OK
/// 2           Invisível = OK
/// 3           Super velocidade = OK

/// O programa deve:
/// Ativar ou desativar essas características com máscaras = OK
/// Mostrar o status de cada flag individualmente. = OK
/// O usuário pode sair a qualquer momento = OK

#define VIVO 0b00000001 ///1
#define MUNICAO 0b00000010 ///2
#define INVISIVEL 0b00000100 ///3
#define SVELOCIDADE 0b00001000 ///4

void mostrarEstado(unsigned char estado){
    printf("\n\n===== Estado atual do personagem =====\n");
    printf("\nVivo : %s", (estado & VIVO) ? "SIM" : "NÃO");
    printf("\nTem munição : %s", (estado & MUNICAO) ? "SIM" : "NÃO");
    printf("\nInvisível : %s", (estado & INVISIVEL) ? "SIM" : "NÃO");
    printf("\nSuper Velocidade : %s\n\n\n", (estado & SVELOCIDADE) ?  "SIM" : "NÃO");
}

int main(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    unsigned char estado = 0;
    int opcao;

    do {
        printf("\n====== MENU ======\n");
        printf("\n1 - Ativar Super Velocidade.");
        printf("\n2 - Desativar Super Velocidade.");
        printf("\n3 - Ativar Invisivilidade.");
        printf("\n4 - Desativar Invisivilidade.");
        printf("\n5 - Ativar Munição.");
        printf("\n6 - Desativar Munição.");
        printf("\n7 - Reviver Personagem.");
        printf("\n8 - Matar Personagem.");
        printf("\n9 - Mostrar estados do personagem.");
        printf("\n0 -  SAIR DO SISTEMA....\n");

        printf("\nDigite sua opção : ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                estado |= SVELOCIDADE;
                break;

            case 2:
                estado &= ~SVELOCIDADE;
                break;

            case 3:
                estado |= INVISIVEL;
                break;

            case 4:
                estado &= ~INVISIVEL;
                break;

            case 5:
                estado |= MUNICAO;
                break;

            case 6:
                estado &= ~MUNICAO;
                break;

            case 7:
                estado |= VIVO;
                break;

            case 8:
                estado &= ~VIVO;
                break;

            case 9:
                mostrarEstado(estado);
                break;

            case 0:
                printf("\n\nSaindo do SISTEMA.........\n\n");
                break;

            default:
                printf("\nValor inválido, digite uma opção válida.\n");
        }

    }while(opcao != 0);

    return 0;
}
