#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///Crie um programa que:
/// 1 - Defina uma struct Aluno com nome, idade, media. = OK
/// 2 - Grave dados de 3 alunos em um arquivo binário chamado alunos.dat
///     digitados pelo usuario. = OK
/// 3 - Leia o arquivo e exiba os alunos salvos. = OK
/// 4 - Depois, salve os mesmos dados em um arquivo texto chamado alunos.txt no formato: = OK
///         Nome: Fulano
///         Idade: 20
///         Média: 8.5

struct Aluno{
    char nome[50];
    int idade;
    float media;
};

int main(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    struct Aluno alunos[3];
    char buffer[100];

    for(int i = 0; i < 3; i++){
        printf("\nAluno %d", i + 1);
        printf("\nNome : ");
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("\nIdade : ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &alunos[i].idade);

        printf("\nMedia : ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%f", &alunos[i].media);
    }

    FILE *fb = fopen("alunos.dat", "wb");

    if(fb == NULL){
        printf("\nErro ao ler/criar arquivo...\n");
        return 1;
    }

    fwrite(alunos, sizeof(struct Aluno),3,fb);
    fclose(fb);

    ///leitura binaria
    struct Aluno lidos[3];
    fb = fopen("alunos.dat","rb");

    if(fb == NULL){
        printf("\nErro ao abrir o arquivo binário...\n");
        return 1;
    }
    fread(lidos, sizeof(struct Aluno),3,fb);
    fclose(fb);

    ///Exibindo as informações do arquivo binário
    printf("\n===== Alunos lidos do arquivo binário =====\n");
    for(int i = 0; i < 3; i++){
        printf("\nNome : %s\n", lidos[i].nome);
        printf("Idade : %d\n", lidos[i].idade);
        printf("Media : %.2f\n\n", lidos[i].media);
    }

    FILE *ft = fopen("alunos.txt", "w");
    if(ft == NULL){
        printf("\nErro ao criar arquivo txt...\n");
        return 1;
    }

    for(int i = 0; i < 3; i++){
        fprintf(ft, "Nome: %s\n", lidos[i].nome);
        fprintf(ft, "Idade: %d\n", lidos[i].idade);
        fprintf(ft, "Media: %.2f\n\n", lidos[i].media);
    }
    fclose(ft);

    return 0;
}
