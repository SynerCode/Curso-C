#include <stdio.h> // Entrada e saida
#include <stdlib.h> // malloc, free, exit
#include <string.h> // memcpy, srtlen
#include <windows.h> //Api do Windows, criar processo, wait e etc
#include <signal.h> // trata dos sinais

/// Crie um programa que tenha funções:
/// 1 - Trate de sinais = OK
/// 2 - Cria processos que executa o cmd.exe - mostrar informações do diretório atual = OK
/// 3 - Manipule Memória alocando memória = OK
///
/// 4 - 4.1 - No main, utilize a função que trata do sinal. = OK
///     4.2 - Deve chamar a função que cria um processo = OK
///     4.3 - Manipule a memória = OK
///

void trata_sinal(int sinal){
    printf("\n[SINAL] Recebido o sinal : %d\n", sinal);
    exit(1);
}

void cria_processo(){
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    char comando[] = "cmd.exe /C dir";

    if(!CreateProcessA(NULL,comando,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi)){
        printf("\nCriacao do processo falho! codigo de erro : %lu\n", GetLastError());
        return;
    }
    printf("\n[PAI] Processo filho criado, aguardado finalizacao...\n");
    WaitForSingleObject(pi.hProcess, INFINITE);

    printf("\n[PAI] processo filho terminou...\n");
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
}

void manipula_memoria(){
    void* bloco = malloc(10);

    if(!bloco){
        printf("\n[ERRO] malloc falhou!\n");
        return;
    }

    const char* texto = "oi!";

    memcpy(bloco, texto, strlen(texto)+1);
    printf("\nConteudo da memoria : %s\n", (char*)bloco);
    free(bloco);
}

int main(){

    signal(SIGINT, trata_sinal);

    cria_processo();

    manipula_memoria();
    return 0;
}
