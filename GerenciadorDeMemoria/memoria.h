#ifndef MEMORIA_H
#define MEMORIA_H
#define MAX_BLOCOS 100

typedef struct {
    void* endenreco;
    int tamanho;
    int emUso;

}BlocoMemoria;

void inicalizarMemoria();
void alocarBloco(int tamanho);
void liberarBloco(int indice);
void exibirMemoria();
void liberarTodaMemoria();

#endif // MEMORIA_H
