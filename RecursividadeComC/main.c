#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int fatorial(int n){
    if(n == 0) return 1;
    else return n * fatorial(n - 1);
}

int fibonacci(int n){
    if(n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    setlocale(LC_CTYPE, "Portuguese_Brazil.1252");

    //printf("\nFatorial : %d", fatorial(5));
    printf("\nFibonacci : %d\n", fibonacci(50));

    return 0;
}
