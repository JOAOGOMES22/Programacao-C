#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, maior, menor, c;
    srand(time(0));//inicia o gerador de numeros aleatorios
    float media;
    
    c = 1;
    media = 0;
    maior = -1;
    menor = 1001;
    while (c<=10){
        c=c+1;
        n=rand() % 1001;
        media=media+n;
        
        if (n > maior){
            maior=n;
        }
        if (n < menor){
            menor=n;
        }
    }
        media=media/10;
        
        printf("c=%d\nmenor=%d\nmaior=%d\nmedia=%d", c, menor, maior, media);
    return EXIT_SUCCESS;
}