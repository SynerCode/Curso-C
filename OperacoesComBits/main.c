#include <stdio.h>
#include <stdlib.h>

void printBits(unsigned char val){
    for(int i = 7; i >= 0; i--){
        printf("%d", (val >> i) & 1);
    }
    printf("\n");
}

int main(){
    unsigned char a = 12; ///00001100
    unsigned char b = 5;  ///00000101

    printf("\na = ");
    printBits(a);

    printf("\nb = ");
    printBits(b);


    printf("\n\na & b = ");
    printBits(a & b);

    printf("\n\na | b = ");
    printBits(a | b);

    printf("\n\na ^ b = ");
    printBits(a ^ b);

    printf("\n\n~a = ");
    printBits(~a);

    printf("\n\n~b = ");
    printBits(~b);

    printf("\n\na << 2 = ");
    printBits(a << 2);

    printf("\n\na >> 2 = ");
    printBits(a >> 2);

    return 0;
}
