#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c; // representa um caracter da tabela ASC-II
    short int i; // equivale a um numero inteiro com sinal de 32 bits
    float f; // equivale a um numero de ponto flutuante de 32 bits
    double d; // equivale a um numero de ponto flutuante de 64 bits

    printf("O tamanho em bytes de um char eh %d\n", sizeof(c));
    printf("O tamanho em bytes de um short int eh %d\n", sizeof(i));
    printf("O tamanho em bytes de um float eh %d\n", sizeof(f));
    printf("O tamanho em bytes de um double eh %d\n", sizeof(d));

    return EXIT_SUCCESS;
}