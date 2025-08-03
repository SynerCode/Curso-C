#include <stdio.h>      /// printf, fgets, perror
#include <stdlib.h>     /// exit, system
#include <string.h>
#include <process.h>
#include <signal.h>

///Tratar sinais = OK
///Ler linha de comando = OK
///Dividir os argumentos = OK
///Executar o comando

#define MAX_CMD 1024 ///Quantidade de de caract......
#define MAX_ARGS 100 ///Quantidade de Args......

void tratar_sinal(int sig){
    printf("\n[MiniShell] Use 'exit' para sair.\n");
    fflush(stdout);
}

void ler_linha(char* buffer){
    printf("--> ");
    fgets(buffer, MAX_CMD, stdin);

    buffer[strcspn(buffer, "\n")] = '\0';

    if(feof(stdin)){
        printf("\n[MiniShell] Saindo....\n");
        exit(0);
    }
}

void dividir_em_args(char* linha, char** args){
    int i = 0;
    args[i] = strtok(linha, " ");

    while(args[i] != NULL && i < MAX_ARGS - 1){
        args[++i] = strtok(NULL, " ");
    }
    args[i] = NULL;
}

void executar_comando(char** args){
    char comando[1024] = {0};

    for(int i = 0; args[i] != NULL; i++){
        strcat(comando, args[i]);
        strcat(comando, " ");
    }

    char* cmd_args[] = {"cmd", "/C", comando, NULL};

    if(_spawnvp(_P_WAIT, "cmd", (const char* const*)cmd_args) == -1){
        perror("\n[ERRO ao executar o comando]\n");
    }
}

int main() {
    char linha[MAX_CMD];
    char* args[MAX_ARGS];

    signal(SIGINT, tratar_sinal);

    printf("\n[MiniShell - Windows] Digite 'exit' para sair...\n");

    while(1){
        ler_linha(linha);

        if(strcmp(linha, "exit") == 0) break;

        dividir_em_args(linha, args);

        if(args[0] != NULL){
            executar_comando(args);
        }
    }

    printf("\n[MiniShell] Saindo......\n");

    return 0;
}
