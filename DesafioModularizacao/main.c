#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "aluno.h"

///Crie um programa modular com os arquivos:
/// 1 - main.c: fun��o principal = OK
/// 2 - aluno.c / aluno.h: defina e implemente uma struct Aluno com: = OK
///         2.1 - char nome[50] = OK
///         2.2 - float nota1, nota2 = OK
///         2.3 - fun��o float calcularMedia(struct Aluno a) = OK
///         2.4 - fun��o void exibirAluno(struct Aluno a) = OK
/// 3 - No main.c, crie um aluno, calcule a m�dia e exiba os dados. = OK

void main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    struct Aluno aluno;
    strcpy(aluno.nome, "Arthur Felipe");
    aluno.nota1 = 7.0;
    aluno.nota2 = 8.0;

    exibirAluno(aluno);
}
