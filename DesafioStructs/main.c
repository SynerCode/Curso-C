#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Crie um programa que:
/// 1 - Defina uma struct Aluno com os campos: nome (string), notas[3] (float) e média (float). = OK
/// 2 - Leia os dados de 3 alunos e calcule a média de cada um. = OK
/// 3 - Exiba os dados usando uma função void exibirAluno(struct Aluno a). = OK
/// 4 - Crie uma função void alterarNome(struct Aluno *a, char *novoNome) para alterar o nome
///     de um aluno por referência. = OK
/// 5 - Altere o nome do segundo aluno para "Aluno Corrigido" e exiba novamente. = OK

///Estruturas
struct Aluno {
    char nome[50];
    float notas[3];
    float media;
};

///Protótipos
void exibirAluno(struct Aluno a);
void alterarNome(struct Aluno *a, char *novoNome);

int main(){

    struct Aluno aluno[3];

    ///Leitura
    for(int i = 0; i < 3; i++){
        printf("\nDigite o nome do %d aluno : ", i+1);
        fgets(aluno[i].nome, 50, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("\nDigite as 3 notas do aluno...\n");

        int soma = 0;
        for(int j = 0; j < 3; j++){
            printf("\nNota %d : ", j+1);
            scanf("%f", &aluno[i].notas[j]);
            soma += aluno[i].notas[j];
        }
        aluno[i].media = soma/3.0;
        getchar();
    }

    ///Exibição
    for(int i = 0; i < 3; i++){
        printf("\n--------- Aluno %d ---------", i+1);
        exibirAluno(aluno[i]);
    }

    ///Alterar nome
    alterarNome(&aluno[0], "Joao Silva");

    printf("\n\nNome do aluno alterado....\n\n");
    exibirAluno(aluno[0]);

    return 0;
}

void exibirAluno(struct Aluno a){
    printf("\nNome: %s", a.nome);
    printf("\nNotas: %.2f, %.2f, %.2f.", a.notas[0], a.notas[1], a.notas[2]);
    printf("\nMedia: %.2f\n\n", a.media);
}

void alterarNome(struct Aluno *a, char *novoNome){
    strcpy(a->nome, novoNome);
}

