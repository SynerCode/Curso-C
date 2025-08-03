#include <stdio.h>
#include "aluno.h"

float calcularMedia(struct Aluno a) {
    return (a.nota1 + a.nota2) / 2.0;
}

void exibirAluno(struct Aluno a){
    printf("\nNome : %s", a.nome);
    printf("\nNota 1 : %.2f", a.nota1);
    printf("\nNota 2 : %.2f", a.nota2);
    printf("\nMedia : %.2f", calcularMedia(a));
}




