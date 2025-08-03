#include <stdio.h>

#define TAM 3

void boasVindas(){
    printf("\n============================================\n");
    printf("       Bem-vindo ao Sistema Academico         \n");
    printf("============================================\n");
}

float lerNotaValida (int numeroNota){
    float nota;
    do{
        printf("Digite a nota %d (0.0 a 10.0): ", numeroNota);
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0){
            printf("Nota invalida! Digite novamente.\n");
        }
    }while(nota < 0.0 || nota > 10.0);
    return nota;
}

float somarNotas(float n1, float n2){
    return n1 + n2;
}

float calcularMedia(float soma){
    return soma / 2.0;
}

void exibirResultado (char nome[], float nota1, float nota2, float soma, float media){
    printf("\nAluno: %s\n", nome);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Soma das notas: %.2f\n", soma);
    printf("Media: %.2f\n", media);

    if (media >= 7.0){
        printf("Resultado: APROVADO!\n");
    }
    else if (media < 5.0) {
        printf("Resultado: REPROVADO!\n");
    }
    else {
        printf("Resultado: FINAL!\n");
    }

    printf("=====================================\n\n");
}

void main(){
    char nome[30];
    float nota1, nota2, soma, media;
    boasVindas();

    for(int i = 1; i <= TAM; i++) {
        printf("\n=== Aluno %d ===\n", i);

        printf("Digite o nome do aluno: ");
        scanf(" %s", nome);

        nota1 = lerNotaValida(1);
        nota2 = lerNotaValida(2);

        soma = somarNotas(nota1, nota2);
        media = calcularMedia(soma);

        exibirResultado(nome, nota1, nota2, soma, media);
    }
}
