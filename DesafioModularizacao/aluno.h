#ifndef ALUNO_H
#define ALUNO_H

struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
};

///float calcularMedia(struct Aluno a);
void exibirAluno(struct Aluno a);

#endif // ALUNO_H
