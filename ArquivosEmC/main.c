#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    FILE *f;
    char linha[100];
    char nome[50];
    int idade;

    /// Abrir ou criar o arquivo
    f = fopen("dados.txt", "r");

    if(f == NULL){
        printf("\nArquivo não existe.\nCriando um novo arquivo...\n");
        f = fopen("dados.txt", "w");

        if(f == NULL){
            printf("\nErro ao criar o arquivo...\n");
            return 1;
        }

        /// Fputs
        ///fputs("Arthur 25\n",f);
        ///fputs("Maria 50\n",f);

        fprintf(f, "%s %d\n", "Arthur Felipe", 30);
        fprintf(f, "%s %d\n", "Maria Silva", 70);
        fclose(f);
        printf("\nDados salvo com sucesso!\n");
    }
    else{
        printf("\nLendo os dados do arquivo...\n");
        ///while(fscanf(f, "%s %d", nome, &idade) != EOF ){
        while(fgets(linha, sizeof(linha), f) != NULL){
            sscanf(linha, "%[^\n0123456789] %d", nome, &idade);
            printf("\nNome : %s\t\tIdade : %d", nome, idade);
        }
        fclose(f);
    }

    return 0;
}


*/



struct Aluno {
    char nome[50];
    int idade;
};

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    FILE *f;
    struct Aluno aluno = {"Arthur", 28};

    /// Abrir ou criar o arquivo
    f = fopen("dados.bin", "rb");

    if(f == NULL){
        printf("\nArquivo não existe.\nCriando um novo arquivo.\n");
        f = fopen("dados.bin", "wb");
        fwrite(&aluno, sizeof(struct Aluno),1,f);
        fclose(f);
    }
    else{
        fread(&aluno, sizeof(struct Aluno),1,f);
        fclose(f);
        printf("\nNome: %s\t\tIdade : %d\n", aluno.nome, aluno.idade);
    }

    return 0;
}
